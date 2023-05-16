/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_slave(
	input wire		clk	,
	input wire		rst	,

	//write address channel
	input wire	[`ysyx_22051013_ID] 	axi_aw_id	,
	input wire	[`ysyx_22051013_ADDR]	axi_aw_addr	,	
	input wire			axi_aw_valid	,
	output  wire			axi_aw_ready	,
	
	//write data channel
	input wire [`ysyx_22051013_DATA]	axi_w_data	,
	input wire [`ysyx_22051013_STRB]	axi_w_strb	,
	input wire			axi_w_valid	,
	output wire			axi_w_ready	,
	
	//write respond channel
	output wire [`ysyx_22051013_ID]		axi_b_id	,
	output wire [`ysyx_22051013_RESP]	axi_b_resp	,	
	output wire			axi_b_valid	,
	input wire			axi_b_ready	,
	
	//read address channel
	input wire	[`ysyx_22051013_ID] 	axi_ar_id	,
	input wire	[`ysyx_22051013_ADDR]	axi_ar_addr	,	
	input wire			axi_ar_valid	,
	output  wire			axi_ar_ready	,
	
	//read data channel
	output wire [`ysyx_22051013_ID]		axi_r_id	,
	output wire [`ysyx_22051013_DATA]	axi_r_data	,
	output wire [`ysyx_22051013_RESP]	axi_r_resp	,
	output wire			axi_r_valid	,
	input wire			axi_r_ready	
);
//write

wire awc_shakehand = axi_aw_valid & axi_aw_ready;
wire wc_shakehand = axi_w_valid & axi_w_ready;
wire bc_shakehand = axi_b_valid & axi_b_ready;

 reg  [1:0] s_write_state     ;
 reg  [1:0] s_write_state_next ;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          s_write_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          s_write_state  <= s_write_state_next     ;
      end
  end
 
 
 always @(*) begin
    case (s_write_state) 
    	`ysyx_22051013_S_IDLE : begin
    		if(awc_shakehand & wc_shakehand) begin
    			s_write_state_next = `ysyx_22051013_S_WRITE;
    		end
    		else begin
    			s_write_state_next = `ysyx_22051013_S_IDLE;
    		end
    	end
    	`ysyx_22051013_S_WRITE : begin
    		if(bc_shakehand) begin
    			s_write_state_next = `ysyx_22051013_S_IDLE;
    		end
    		else begin
    			s_write_state_next = `ysyx_22051013_S_WRITE;
    		end
    	end
    	default : begin s_write_state_next = `ysyx_22051013_S_IDLE; end
     endcase
 end
 
assign axi_aw_ready = axi_aw_valid & axi_w_valid;
assign axi_w_ready = axi_aw_valid & axi_w_valid;

assign axi_b_id = axi_aw_id;
assign axi_b_valid = (s_write_state == `ysyx_22051013_S_WRITE) ;
assign axi_b_resp = 2'b00;


//read
 wire   arc_shakehand   = axi_ar_ready & axi_ar_valid;
 wire   rc_shakehand    = axi_r_ready & axi_r_valid ;
 
 reg  [1:0] s_read_state     ;
 reg  [1:0] s_read_state_next ;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          s_read_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          s_read_state  <= s_read_state_next     ;
      end
  end
  
 always @(*) begin
    case (s_read_state) 
    	`ysyx_22051013_S_IDLE : begin
    		if(arc_shakehand) begin
    			s_read_state_next = `ysyx_22051013_S_DATA;
    		end
    		else begin
    			s_read_state_next = `ysyx_22051013_S_IDLE;
    		end
    	end
    	`ysyx_22051013_S_DATA : begin
    		if(rc_shakehand) begin
    			s_read_state_next = `ysyx_22051013_S_IDLE;
    		end
    		else begin
    			s_read_state_next = `ysyx_22051013_S_DATA;
    		end
    	end
    	default : begin s_read_state_next = `ysyx_22051013_S_IDLE; end
     endcase
 end
 
 assign axi_ar_ready = (s_read_state == `ysyx_22051013_S_IDLE);
 assign axi_r_valid = (s_read_state == `ysyx_22051013_S_DATA);
 assign axi_r_id = (s_read_state == `ysyx_22051013_S_DATA) ? axi_ar_id : 5'd0;
 assign axi_r_resp = 2'b00;
 assign axi_r_data = (s_read_state == `ysyx_22051013_S_DATA) ? dpic_read_data : `ysyx_22051013_ZERO64;
 

 reg [`ysyx_22051013_DATA] dpic_read_data;
 
 //--------------------------------------dpi-c--------------------------------------------//
  
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte rlen);
import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte wlen);
reg [7:0] rlen = 8'd8;
always @(posedge clk) begin
  if(arc_shakehand)
	pmem_read(axi_ar_addr,dpic_read_data,rlen);
  if(bc_shakehand)
	pmem_write(axi_aw_addr,axi_w_data,axi_w_strb);
end

endmodule
 

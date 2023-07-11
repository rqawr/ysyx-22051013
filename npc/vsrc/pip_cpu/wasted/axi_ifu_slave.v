/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_ifu_slave(
	input wire		clk	,
	input wire		rst	,
	//read address channel
	input wire	[`ysyx_22051013_ADDR]	ifu_ar_addr	,	
	input wire			ifu_ar_valid	,
	output  wire			ifu_ar_ready	,
	
	//read data channel
	output wire [`ysyx_22051013_DATA]	ifu_r_data	,
	output wire [`ysyx_22051013_RESP]	ifu_r_resp	,
	output wire			ifu_r_valid	,
	input wire			ifu_r_ready	
);

 wire   arc_shakehand   = ifu_ar_ready & ifu_ar_valid;
 wire   rc_shakehand    = ifu_r_ready & ifu_r_valid ;
 
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
 
 assign ifu_ar_ready = (s_read_state == `ysyx_22051013_S_IDLE);
 assign ifu_r_valid = (s_read_state == `ysyx_22051013_S_DATA);
 assign ifu_r_resp = 2'b00;
 assign ifu_r_data = (s_read_state == `ysyx_22051013_S_DATA) ? dpic_inst_i : `ysyx_22051013_ZERO64;
 

 reg [`ysyx_22051013_DATA] dpic_inst_i;
 
 //--------------------------------------dpi-c--------------------------------------------//
  
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte rlen);
reg [7:0] rlen = 8'd8;
always @(posedge clk) begin
  if(arc_shakehand)
    pmem_read(ifu_ar_addr,dpic_inst_i,rlen);
end

endmodule
 

/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : clint (only time-interrupt)
---------------------------------------*/
`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_clint(
	input wire				clk	,
	input wire				rst	,
	output wire				time_interrupt	,

	//write address channel
	input	wire 	[`ysyx_22051013_ID]	t_axi_aw_id	,
	input	wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	,	
	input	wire				t_axi_aw_valid	,
	output	wire				t_axi_aw_ready	,
	input	wire	[7:0]			t_axi_aw_len	,
	input	wire	[2:0]			t_axi_aw_size	,
	input	wire	[1:0]			t_axi_aw_burst	,
	
	//write data channel
	input	wire	[`ysyx_22051013_DATA]	t_axi_w_data	,
	input	wire	[`ysyx_22051013_STRB]	t_axi_w_strb	,
	input	wire				t_axi_w_last	,
	input	wire				t_axi_w_valid	,
	output	wire				t_axi_w_ready	,
	
	//write respond channel
	output	wire	[`ysyx_22051013_ID]	t_axi_b_id	,
	output	wire	[`ysyx_22051013_RESP]	t_axi_b_resp	,	
	output	wire				t_axi_b_valid	,
	input	wire				t_axi_b_ready	,
	
	//read address channel
	input	wire	[`ysyx_22051013_ID]	t_axi_ar_id	,
	input	wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	,
	input	wire	[7:0]			t_axi_ar_len	,
	input	wire	[2:0]			t_axi_ar_size	,
	input	wire	[1:0]			t_axi_ar_burst	,	
	input	wire				t_axi_ar_valid	,
	output	wire				t_axi_ar_ready	,
	
	//read data channel
	output	wire	[`ysyx_22051013_ID]	t_axi_r_id	,
	output	wire	[`ysyx_22051013_DATA]	t_axi_r_data	,
	output	wire	[`ysyx_22051013_RESP]	t_axi_r_resp	,
	output	wire				t_axi_r_last	,
	output	wire				t_axi_r_valid	,
	input	wire				t_axi_r_ready	
);



reg  [1:0] clint_write_state     ;
 reg  [1:0] clint_write_state_next ;
 
 wire awc_shakehand = t_axi_aw_valid & t_axi_aw_ready;
wire wc_shakehand = t_axi_w_valid & t_axi_w_ready & t_axi_w_last;
wire bc_shakehand = t_axi_b_valid & t_axi_b_ready;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          clint_write_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          clint_write_state  <= clint_write_state_next     ;
      end
  end
 
 
 always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		clint_write_state_next  = `ysyx_22051013_S_IDLE ;
	end
	else begin
		case (clint_write_state) 
		    	`ysyx_22051013_S_IDLE : begin
		    		if(awc_shakehand & wc_shakehand) begin
		    			clint_write_state_next = `ysyx_22051013_S_WRITE;
		    		end
		    		else begin
		    			clint_write_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    	end
		    	`ysyx_22051013_S_WRITE : begin
		    		if(bc_shakehand) begin
		    			clint_write_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    		else begin
		    			clint_write_state_next = `ysyx_22051013_S_WRITE;
		    		end
		    	end
		    	default : begin clint_write_state_next = `ysyx_22051013_S_IDLE; end
		endcase
	end
 end
 
assign t_axi_aw_ready = t_axi_aw_valid ;
assign t_axi_w_ready = t_axi_aw_valid & t_axi_w_valid;

assign t_axi_b_id = t_axi_aw_id;
assign t_axi_b_valid = (clint_write_state == `ysyx_22051013_S_WRITE) ;
assign t_axi_b_resp = 2'b00;

//read
 wire   arc_shakehand   = t_axi_ar_ready & t_axi_ar_valid;
 wire   rc_shakehand    = t_axi_r_ready & t_axi_r_valid ;
 
 reg  [1:0] clint_read_state     ;
 reg  [1:0] clint_read_state_next ;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          clint_read_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          clint_read_state  <= clint_read_state_next     ;
      end
  end
  
 always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		clint_read_state_next  = `ysyx_22051013_S_IDLE ;
	end
	else begin
		case (clint_read_state) 
		    	`ysyx_22051013_S_IDLE : begin
		    		if(arc_shakehand) begin
		    			clint_read_state_next = `ysyx_22051013_S_DATA;
		    		end
		    		else begin
		    			clint_read_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    	end
		    	`ysyx_22051013_S_DATA : begin
		    		if(rc_shakehand) begin
		    			clint_read_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    		else begin
		    			clint_read_state_next = `ysyx_22051013_S_DATA;
		    		end
		    	end
		    	default : begin clint_read_state_next = `ysyx_22051013_S_IDLE; end
		endcase
	end
 end

  assign t_axi_ar_ready = (clint_read_state == `ysyx_22051013_S_IDLE);
 assign t_axi_r_valid = (clint_read_state == `ysyx_22051013_S_DATA);
 assign t_axi_r_id = (clint_read_state == `ysyx_22051013_S_DATA) ? t_axi_ar_id : 4'd0;
 assign t_axi_r_resp = 2'b00;
 assign t_axi_r_last = (clint_read_state == `ysyx_22051013_S_DATA);
 assign t_axi_r_data = (clint_read_state == `ysyx_22051013_S_DATA) ? read_csr_data : `ysyx_22051013_ZERO64;

//in clint
wire [63:0] read_csr_data;
reg [63:0] csr_mtime;
reg [63:0] csr_mtimecmp;

wire mtime_read;
wire mtime_write;
wire mtimecmp_read;
wire mtimecmp_write;

wire read_condi = (t_axi_ar_len == 8'd0) & (t_axi_ar_size == 3'b011) & (t_axi_ar_burst == `ysyx_22051013_AXI_BURST_INCR);
wire write_condi = (t_axi_aw_len == 8'd0) & (t_axi_aw_size == 3'b011) & (t_axi_aw_burst == `ysyx_22051013_AXI_BURST_INCR);

assign mtime_read = (t_axi_ar_addr == `ysyx_22051013_MTIME) & read_condi;
assign mtimecmp_read = (t_axi_ar_addr == `ysyx_22051013_MTIMECMP) & read_condi;
assign mtime_write = (t_axi_aw_addr == `ysyx_22051013_MTIME) & awc_shakehand & wc_shakehand & write_condi;
assign mtimecmp_write =(t_axi_aw_addr == `ysyx_22051013_MTIMECMP) & awc_shakehand & wc_shakehand & write_condi;

wire [63:0] wmask;

assign wmask = {{8{t_axi_w_strb[7]}},{8{t_axi_w_strb[6]}},{8{t_axi_w_strb[5]}},{8{t_axi_w_strb[4]}},{8{t_axi_w_strb[3]}},{8{t_axi_w_strb[2]}},{8{t_axi_w_strb[1]}},{8{t_axi_w_strb[0]}}};

wire [63:0] mtime_temp;
wire [63:0] mtimecmp_temp;

assign mtime_temp = mtime_write ? ((wmask & t_axi_w_data) | (~wmask & csr_mtime)) : (csr_mtime + 1);
assign mtimecmp_temp = mtimecmp_write ? ((wmask & t_axi_w_data) | (~wmask & csr_mtimecmp)) : csr_mtimecmp;

  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          csr_mtime  <= `ysyx_22051013_ZERO64 ;
          csr_mtimecmp  <= `ysyx_22051013_ZERO64 ;
      end
      else begin
          csr_mtime  <= mtime_temp ;
          csr_mtimecmp  <= mtimecmp_temp ;
      end
  end
  
  assign read_csr_data = mtime_read ? csr_mtime : 
			 mtimecmp_read  ? csr_mtimecmp :
			 `ysyx_22051013_ZERO64;
			 
assign time_interrupt = (csr_mtime > csr_mtimecmp);

endmodule


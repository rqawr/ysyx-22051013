/*-------
* Last modify date : 2022/3/8
* Function : csr operate (mstatus mepc mtvec mcause)
*/
 
 `include "define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_csr(
	input wire			clk		,
	input wire			rst		,
	input wire [3:0]		csr_ctl	,//{csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
	input wire [11:0]		csr_addr,
	input wire [`ysyx_22051013_REG]	mcause_value,
	input wire [`ysyx_22051013_DATA]	write_csr_data,
	output wire [`ysyx_22051013_DATA]	read_csr_data
);

import "DPI-C" function void difftest_dut_csr(
	input longint csr_mstatus,
	input longint csr_mtvec,
	input longint csr_mepc,
	input longint csr_mcause
);

always@(*) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end

//0X300 mstatus
wire mstatus_rd = (csr_addr == 12'h300) && csr_ctl[2] ;
wire mstatus_wr = (csr_addr == 12'h300) && csr_ctl[3] ;
reg mstatus_mie;
reg mstatus_mpie;
reg [1:0] mstatus_mpp;
reg [`ysyx_22051013_REG] mstatus = {{51{1'b0}}, mstatus_mpp, 3'b000, mstatus_mpie, 3'b000, mstatus_mie, 3'b000};

wire mstatus_ie_ena = mstatus_wr | csr_ctl[1] | csr_ctl[0] ;

wire mie_set = csr_ctl[1] ? 1'b0 : 
               csr_ctl[0] ? mstatus_mpie : 
							 mstatus_wr ? write_csr_data[3] :
							 mstatus_mie ;

wire mpie_set = csr_ctl[1] ? mstatus_mie :
                csr_ctl[0] ? 1'b1 :
								mstatus_wr ? write_csr_data[7] :
								mstatus_mpie ;

wire [1:0] mpp_set = csr_ctl[1] ? 2'b11 : 
               csr_ctl[0] ? 2'b00 :
							 mstatus_wr ? write_csr_data[14:13] :
							 mstatus_mpp ;

always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mstatus <= `ysyx_22051013_ZERO64 ; end
	else if(mstatus_ie_ena) begin mstatus_mie <= mie_set;
                                mstatus_mpie <= mpie_set;
																mstatus_mpp <= mpp_set; end
  else begin mstatus <= mstatus ;end
end


//0x305 mtvec
wire mtvec_rd = ((csr_addr==12'h305) && csr_ctl[2]) | csr_ctl[1] ;
wire mtvec_wr = ((csr_addr==12'h305) && csr_ctl[3]) ;

reg [63:2] mtvec_base ;
always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mtvec_base <= 62'd0; end
  else if(mtvec_wr) begin mtvec_base <= write_csr_data[63:2] ; end
  else         begin mtvec_base <= mtvec_base ; end
end

wire [1:0] mtvec_mode ;
assign mtvec_mode =2'b00;
wire [`ysyx_22051013_REG] mtvec = {mtvec_base,mtvec_mode};

//0x341 mepc
wire mepc_rd = ((csr_addr==12'h341) && csr_ctl[2]) | csr_ctl[0] ;
wire mepc_wr = ((csr_addr==12'h341) && csr_ctl[3]) | csr_ctl[1] ;

reg [`ysyx_22051013_REG] mepc ;
always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mepc <= `ysyx_22051013_ZERO64; end
  else if(mepc_wr) begin mepc <= write_csr_data; end
  else             begin mepc <= mepc ;end
end

//0x342 mcause
wire mcause_rd = ((csr_addr == 12'h342) && csr_ctl[2]) ;
wire mcause_wr = ((csr_addr == 12'h342) && csr_ctl[3]) ;
reg [`ysyx_22051013_REG] mcause ;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin mcause <= `ysyx_22051013_ZERO64 ; end
	else if(mcause_wr) begin mcause <= write_csr_data ; end
	else if(csr_ctl[1]) begin mcause <= mcause_value ; end
	else               begin mcause <= mcause ;end
end

//read
assign read_csr_data = mstatus_rd ? mstatus:
	                     mepc_rd    ? mepc   :
											 mtvec_rd   ? mtvec  : 
											 mcause_rd  ? mcause :
											 `ysyx_22051013_ZERO64;

endmodule

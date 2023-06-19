/*-------
* Last modify date : 2022/3/8
* Function : csr operate (mcycle mip mie mstatus mepc mtvec mcause)
*/
 
 `include "single_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_csr(
	input wire			clk		,
	input wire			rst		,
	input wire [`ysyx_22051013_PC]	pc_i,
	input wire [3:0]		csr_ctl	,//{csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
	input wire [11:0]		csr_addr,
	input wire			core_valid,
	input wire [`ysyx_22051013_REG]	mcause_value,
	input wire [`ysyx_22051013_DATA]	write_csr_data,
	input wire			time_interrupt		,
	output wire			time_interrupt_confirm	,
	output wire [`ysyx_22051013_DATA]	read_csr_data
);

import "DPI-C" function void difftest_dut_csr(
	input longint csr_mstatus,
	input longint csr_mtvec,
	input longint csr_mepc,
	input longint csr_mcause
);

always@(posedge clk) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end

//0xb00 mcycle
wire mcycle_rd = (csr_addr == 12'hb00) && csr_ctl[2] ;
wire mcycle_wr = (csr_addr == 12'hb00) && csr_ctl[3] ;

reg [`ysyx_22051013_REG] mcycle;

always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mcycle <= `ysyx_22051013_ZERO64; end
  else if(mcycle_wr) begin mcycle <= write_csr_data; end
  else             begin mcycle <= mcycle + 64'd1 ;end
end


//0x304 mie 
wire mie_rd = (csr_addr == 12'h304) && csr_ctl[2] ;
wire mie_wr = (csr_addr == 12'h304) && csr_ctl[3] ;

reg mtie;
reg [`ysyx_22051013_REG] mie = {56'd0, mtie, 7'd0};


always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mtie <= 1'b0; end
  else if(mie_wr) begin mtie <= write_csr_data[7]; end
  else if(time_interrupt_confirm & ~core_valid) begin mtie <= 1'b0; end
  else             begin mtie <= mtie ;end
end

//0x344 mip
wire mip_rd = (csr_addr == 12'h344) && csr_ctl[2] ;

reg mtip;
reg [`ysyx_22051013_REG] mip = {56'd0, mtip, 7'd0};


always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin mtip <= 1'b0; end
  else             begin mtip <= time_interrupt ;end
end

//0X300 mstatus
wire mstatus_rd = (csr_addr == 12'h300) && csr_ctl[2] ;
wire mstatus_wr = (csr_addr == 12'h300) && csr_ctl[3] ;
reg mstatus_mie;
reg mstatus_mpie;
reg [1:0] mstatus_mpp;
wire [`ysyx_22051013_REG] mstatus = {51'd0, mstatus_mpp, 3'b000, mstatus_mpie, 3'b000, mstatus_mie, 3'b000};

wire mstatus_ie_ena = mstatus_wr | csr_ctl[1] | csr_ctl[0] | time_interrupt_confirm;

wire mie_set = (csr_ctl[1] | time_interrupt_confirm) ? 1'b0 : 
               csr_ctl[0] ? mstatus_mpie : 
		mstatus_wr ? write_csr_data[3] :
		mstatus_mie ;

wire mpie_set = (csr_ctl[1] | time_interrupt_confirm) ? mstatus_mie :
                csr_ctl[0] ? 1'b1 :
		mstatus_wr ? write_csr_data[7] :
		mstatus_mpie ;

wire [1:0] mpp_set = (csr_ctl[1] | time_interrupt_confirm)? 2'b11 : 
               csr_ctl[0] ? 2'b00 :
		mstatus_wr ? write_csr_data[12:11] :
		mstatus_mpp ;

always@(posedge clk) begin
  	if(rst == `ysyx_22051013_RSTABLE) begin 
  		mstatus_mie <= 1'b0;
  		mstatus_mpie <= 1'b0;
		mstatus_mpp <= 2'b00;
 	end
	else if(mstatus_ie_ena & ~core_valid) begin 
		mstatus_mie <= mie_set;
		mstatus_mpie <= mpie_set;
		mstatus_mpp <= mpp_set; 
	end
	else begin  
		mstatus_mie <= mstatus_mie;
		mstatus_mpie <= mstatus_mpie;
		mstatus_mpp <= mstatus_mpp;
	end
end


//0x305 mtvec
wire mtvec_rd = ((csr_addr==12'h305) && csr_ctl[2]) | csr_ctl[1] | time_interrupt_confirm;
wire mtvec_wr = ((csr_addr==12'h305) && csr_ctl[3]) ;

reg [63:2] mtvec_base ;
always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mtvec_base <= 62'd0; end
  else if(mtvec_wr) begin mtvec_base <= write_csr_data[63:2] ; end
  else         begin mtvec_base <= mtvec_base ; end
end

wire [1:0] mtvec_mode ;
assign mtvec_mode =2'b00;
reg [`ysyx_22051013_REG] mtvec = {mtvec_base,mtvec_mode};

//0x341 mepc
wire mepc_rd = ((csr_addr==12'h341) && csr_ctl[2]) | csr_ctl[0] ;
wire mepc_wr = ((csr_addr==12'h341) && csr_ctl[3]) | csr_ctl[1] | time_interrupt_confirm;

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
	else if(csr_ctl[1] | time_interrupt_confirm) begin mcause <= mcause_value ; end
	else               begin mcause <= mcause ;end
end

assign time_interrupt_confirm = mtie & mtip & mstatus[3] & (pc_i != 64'd0);

//read
assign read_csr_data =	({64{mstatus_rd}} & mstatus)
	                | ({64{mepc_rd}} & mepc) 
			| ({64{mtvec_rd}} & mtvec)  
			| ({64{mcause_rd}} & mcause) 
			| ({64{mie_rd}} & mie)
			| ({64{mcycle_rd}} & mcycle)
			| ({64{mip_rd}} & mip)
			| `ysyx_22051013_ZERO64;

endmodule

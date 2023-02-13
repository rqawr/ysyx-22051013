/*-----------
* Last modify date: 2022/2/6
* Function : riscv64 register
*/
 `include "define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_regfile(
 input wire							clk			,
 input wire							rst			,

 input wire	[`ysyx_22051013_REGADDR]	waddr		,
 input wire [`ysyx_22051013_REG]			wdata		,
 input wire														wen			,

 input wire	[`ysyx_22051013_REGADDR]	raddr1		,
 output wire	[`ysyx_22051013_REG]			rdata1		,
 input wire														ren1			,

 input wire	[`ysyx_22051013_REGADDR]	raddr2		,
 output wire [`ysyx_22051013_REG]			rdata2		,
 input wire														ren2			
 );

 reg[`ysyx_22051013_REG] regs [0:31];
 
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(regs);
 

 integer i;
 always@(posedge clk) begin
	 if(rst == `ysyx_22051013_RSTABLE) begin
		 for(i=0;i<32;i+=1) begin
			 regs[i] <=	`ysyx_22051013_ZERO64;
		 end
	 end
   else begin
		 if(wen == `ysyx_22051013_WENABLE && waddr != 5'd0)begin
			 regs[waddr]<=wdata;
		 end
	 end
 end

 assign rdata1 = ((rst != `ysyx_22051013_RSTABLE) && (ren1 == `ysyx_22051013_RENABLE)) ? regs[raddr1] : `ysyx_22051013_ZERO64;
 assign rdata2 = ((rst != `ysyx_22051013_RSTABLE) && (ren2 == `ysyx_22051013_RENABLE)) ? regs[raddr2] : `ysyx_22051013_ZERO64;

 endmodule


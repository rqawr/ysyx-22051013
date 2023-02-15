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
 
 import "DPI-C" function void difftest_dut_regs(
 	input longint Z0 ,
 	input longint ra ,
 	input longint sp ,
 	input longint gp ,
 	input longint tp ,
 	input longint t0 ,
 	input longint t1 ,
 	input longint t2 ,
 	input longint fp ,
 	input longint s1 ,
 	input longint a0 ,
 	input longint a1 ,
 	input longint a2 ,
 	input longint a3 ,
 	input longint a4 ,
 	input longint a5 ,
 	input longint a6 ,
 	input longint a7 ,
 	input longint s2 ,
 	input longint s3 ,
 	input longint s4 ,
 	input longint s5 ,
 	input longint s6 ,
 	input longint s7 ,
 	input longint s8 ,
 	input longint s9 ,
 	input longint s10 ,
 	input longint a11 ,
        input longint t3 ,
 	input longint t4 ,
 	input longint t5 ,
 	input longint t6 
 );

 always@(posedge clk)begin
 	difftest_dut_regs(
 		regs[0],
 		regs[1],
 		regs[2],
 		regs[3],
 		regs[4],
 		regs[5],
 		regs[6],
 		regs[7],
 		regs[8],
 		regs[9],
 		regs[10],
 		regs[11],
 		regs[12],
 		regs[13],
 		regs[14],
 		regs[15],
 		regs[16],
 		regs[17],
 		regs[18],
 		regs[19],
 		regs[20],
 		regs[21],
 		regs[22],
 		regs[23],
 		regs[24],
 		regs[25],
 		regs[26],
 		regs[27],
 		regs[28],
 		regs[29],
 		regs[30],
 		regs[31]
 	);
 end
 

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


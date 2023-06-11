/*----
*
*
*
*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_bpu_static(
	input wire				rst	,
	input wire [`ysyx_22051013_INST]	inst,
	input wire [`ysyx_22051013_PC]		pc_i,
	//input wire [`ysyx_22051013_REG]		rs1_data,
	
	output wire [`ysyx_22051013_PC]		pc_o,
	//output wire [`ysyx_22051013_REGADDR]	rs1_addr,
	//output wire				rs1_ena,
	input wire				bpu_pc_hold,
	output wire				bpu_jump
	
);

//wire [11:0] i_imm ;
wire [20:1] j_imm ;
wire [12:1] b_imm ;

//assign i_imm = inst[31:20];
assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst[31:12];
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ;

wire [6:0] opcode;

assign opcode = inst[6:0];

wire inst_jal   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_JAL) & (opcode[1:0] == 2'b11)    ;
//wire inst_jalr  = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_JALR)   ;
wire inst_bxx   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_BRANCH) ;

//assign rs1_addr = inst_jalr ? inst[19:15] : 5'd0;

//assign rs1_ena = inst_jalr;

wire [`ysyx_22051013_DATA] op1;
wire [`ysyx_22051013_DATA] op2;

assign op1 = /*inst_jalr ? rs1_data:*/pc_i;

assign op2 = inst_jal  			? {{44{j_imm[20]}} , j_imm[20:1] << 1} :
             (inst_bxx & b_imm[12])  	? {{52{b_imm[12]}} , b_imm[12:1] << 1} :
            // inst_jalr 			? {{52{i_imm[11]}} , i_imm[11:0]}      :
             (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 :
             `ysyx_22051013_PLUS4;

wire [`ysyx_22051013_DATA] pr_pc;
assign pr_pc = op1 + op2;

assign pc_o = ((rst == `ysyx_22051013_RSTABLE) | bpu_pc_hold) ? `ysyx_22051013_STARTPC : pr_pc;
assign bpu_jump = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : (inst_bxx & b_imm[12]);

//assign bpu_pc_jump = inst_jal | inst_bxx;

endmodule
//inst_jalr 取到非地址数据，在idu中需在idu_stall_ena前判断是否成功

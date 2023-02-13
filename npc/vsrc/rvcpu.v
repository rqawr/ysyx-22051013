/*------
* Last modify date : 2022/2/8
* Function : top layer of processor(single)
*/

  `include "define.v"
	`include "ifu.v"
	`include "idu.v"
	`include "exu.v"
	`include "regfile.v"
	/* verilator lint_off DECLFILENAME */
module ysyx_22051013_rvcpu(
	input wire              clk		,
	input wire              rst		,

	output wire [`ysyx_22051013_PC] inst_pc		,
	input wire [`ysyx_22051013_INST] inst			
);

//idu
wire [`ysyx_22051013_REG] reg_id_rs1_data ;
wire [`ysyx_22051013_REG] reg_id_rs2_data ;
wire [`ysyx_22051013_REGADDR] id_reg_rs1_addr ;
wire [`ysyx_22051013_REGADDR] id_reg_rs2_addr ;
wire [`ysyx_22051013_REGADDR] id_reg_rd_addr ;
wire                          id_reg_rs1_ena	;
wire                          id_reg_rs2_ena	;
wire                          id_reg_rd_ena	;

wire            		id_ex_jump     ;
wire [`ysyx_22051013_PC]    	id_ex_pc    	   ;
wire [`ysyx_22051013_DATA] 	id_ex_op1 ;
wire [`ysyx_22051013_DATA] 	id_ex_op2 ;

wire [6:0]			id_ex_alu_sel;

//exu
wire  [`ysyx_22051013_REG]           ex_aludata    ;
wire  [`ysyx_22051013_PC]  	     ex_if_pc 	   ;
wire           			ex_if_pc_sel  	   ;

// regfile

ysyx_22051013_ifu ifu0(
		.clk(clk)	,
		.rst(rst)	,
		.pcsrc_i(ex_if_pc_sel)  ,
 		.ex_pc_i(ex_if_pc)	,		
		.pc_o(inst_pc)
);

ysyx_22051013_idu idu1(
	.rst(rst)	,
	.clk(clk)	,
	.inst_i(inst)	,
	.pc_i(inst_pc)	,
 	.pc_o(id_ex_pc)	,
 	
	.rs1_addr(id_reg_rs1_addr)	,
	.rs2_addr(id_reg_rs2_addr)	,
	.rs1_ena(id_reg_rs1_ena)	,
	.rs2_ena(id_reg_rs2_ena)	,
	.rs1_data(reg_id_rs1_data)	,
	.rs2_data(reg_id_rs2_data)	,
	.rd_ena(id_reg_rd_ena)		,
	.rd_addr(id_reg_rd_addr)	,
	
	.alusrc_o(id_ex_alu_sel)	,
	.jump_o(id_ex_jump)		,
	.op1(id_ex_op1)	,
	.op2(id_ex_op2)
);

ysyx_22051013_exu exu2(
	.rst(rst)	,
	.op1(id_ex_op1)	,
	.op2(id_ex_op2)	,
	.pc_i(id_ex_pc)	,
	.jump_i(id_ex_jump)	,
	.alu_sel(id_ex_alu_sel)	,
	.alu_res(ex_aludata)	,
	.jump_pc_o(ex_if_pc)	,
 	.ex_pcsrc_o(ex_if_pc_sel)		
);

ysyx_22051013_regfile reg3(
	.clk(clk)	,
	.rst(rst)	,
	.waddr(id_reg_rd_addr)	,
	.wdata(ex_aludata)	,
	.raddr1(id_reg_rs1_addr)	,
	.raddr2(id_reg_rs2_addr)	,
	.rdata1(reg_id_rs1_data)	,
	.rdata2(reg_id_rs2_data)	,
	.wen(id_reg_rd_ena)	,
	.ren1(id_reg_rs1_ena)	,
	.ren2(id_reg_rs2_ena)	
);

endmodule

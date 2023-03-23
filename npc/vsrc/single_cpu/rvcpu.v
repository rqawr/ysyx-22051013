/*------
* Last modify date : 2022/2/8
* Function : top layer of processor(single)
*/

  `include "define.v"
	`include "ifu.v"
	`include "idu.v"
	`include "exu.v"
	`include "lsu.v"
	`include "wbu.v"
	`include "regfile.v"
	/* verilator lint_off DECLFILENAME */
module ysyx_22051013_rvcpu(
	input wire              clk		,
	input wire              rst		
		
);

//ifu
 wire [`ysyx_22051013_INST]  	if_id_inst 	   ;
 wire [`ysyx_22051013_PC]    	if_id_pc    	   ;

//idu

wire [`ysyx_22051013_REGADDR] id_reg_rs1_addr ;
wire [`ysyx_22051013_REGADDR] id_reg_rs2_addr ;
wire [`ysyx_22051013_REGADDR] id_reg_rd_addr ;
wire                          id_reg_rs1_ena	;
wire                          id_reg_rs2_ena	;
wire                          id_reg_rd_ena	;

wire [`ysyx_22051013_IMM]     	id_ex_imm	;
wire            		id_ex_branch   ;
wire            		id_ex_jump     ;
wire [3:0]      		id_ls_ctl  	   ;
wire [1:0]      		id_wb_ctl    	   ;
wire [7:0]			id_ex_alu_sel;
wire [`ysyx_22051013_PC]    	id_ex_pc    	   ;
wire [`ysyx_22051013_DATA] 	id_ex_op1 ;
wire [`ysyx_22051013_DATA] 	id_ex_op2 ;
wire [3:0]                      id_ex_csrctl;


//exu
wire  [`ysyx_22051013_REG]           ex_aludata    ;
wire [`ysyx_22051013_DATA] 	     ex_ls_store_data  ;
wire  [`ysyx_22051013_PC]  	     ex_if_pc 	   ;
wire           			     ex_if_pc_sel  ;

//lsu
wire [`ysyx_22051013_DATA]         ls_wb_data        ;

//wbu
wire [`ysyx_22051013_DATA]	   wb_reg_rd_data     ;

// regfile
wire [`ysyx_22051013_REG] reg_id_rs1_data ;
wire [`ysyx_22051013_REG] reg_id_rs2_data ;

ysyx_22051013_ifu ifu0(
		.clk(clk)	,
		.rst(rst)	,
		.pcsrc_i(ex_if_pc_sel)  ,
 		.ex_pc_i(ex_if_pc)	,
 		.inst_o(if_id_inst)	,		
		.pc_o(if_id_pc)
);

ysyx_22051013_idu idu1(
	.rst(rst)	,
	.inst_i(if_id_inst)	,
	.pc_i(if_id_pc)	,
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
	.lsctl_o(id_ls_ctl)		,
 	.wbctl_o(id_wb_ctl)		,
	.jump_o(id_ex_jump)		,
	.branch_o(id_ex_branch)		,
	.imm(id_ex_imm)			,
	.csr_ctl(id_ex_csrctl)		,
	.op1(id_ex_op1)			,
	.op2(id_ex_op2)
);

ysyx_22051013_exu exu2(
	.clk(clk)	,
	.rst(rst)	,
	.op1(id_ex_op1)	,
	.op2(id_ex_op2)	,
	.pc_i(id_ex_pc)	,
	.imm(id_ex_imm)	,
	.csr_ctl(id_ex_csrctl)	,
	.jump_i(id_ex_jump)	,
	.branch_i(id_ex_branch)	,
	.alu_sel(id_ex_alu_sel)	,
	.exu_res(ex_aludata)	,
	.store_data(ex_ls_store_data) ,
	.jump_pc_o(ex_if_pc)	,
 	.ex_pcsrc_o(ex_if_pc_sel)		
);

ysyx_22051013_lsu lsu3(
 	.rst(rst)		,
 	.clk(clk)	,
 	.alu_res(ex_aludata)	,
 	.store_data(ex_ls_store_data)	,
 	.ls_ctl	(id_ls_ctl) ,
 	.ls_data_o(ls_wb_data)	
 );

ysyx_22051013_wbu wbu4(
 	.rst(rst),
 	.ls_rd_data(ls_wb_data)	,
 	.wb_ctl(id_wb_ctl)	,
 	.exu_res(ex_aludata)	,
 	.wb_data(wb_reg_rd_data)	
);

ysyx_22051013_regfile reg3(
	.clk(clk)	,
	.rst(rst)	,
	.waddr(id_reg_rd_addr)	,
	.wdata(wb_reg_rd_data)	,
	.raddr1(id_reg_rs1_addr)	,
	.raddr2(id_reg_rs2_addr)	,
	.rdata1(reg_id_rs1_data)	,
	.rdata2(reg_id_rs2_data)	,
	.wen(id_reg_rd_ena)	,
	.ren1(id_reg_rs1_ena)	,
	.ren2(id_reg_rs2_ena)	
);

endmodule

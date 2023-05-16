/*------
* Last modify date : 2022/2/8
* Function : top layer of processor(single)
*/

        `include "pip_cpu/define.v"
        `include "pip_cpu/bpu_static.v"
	`include "pip_cpu/ifu.v"
	`include "pip_cpu/if_id_reg.v"
	`include "pip_cpu/idu.v"
	`include "pip_cpu/id_ex_reg.v"
	`include "pip_cpu/exu.v"
	`include "pip_cpu/ex_ls_reg.v"
	`include "pip_cpu/lsu.v"
	`include "pip_cpu/ls_wb_reg.v"
	`include "pip_cpu/wbu.v"
	`include "pip_cpu/regfile.v"
	//`include "pip_cpu/hzd_ctl.v"
//----------------out core-----------//
	`include "pip_cpu/axi_master_arbitrator.v"
	`include "pip_cpu/axi_slave.v"
	`include "pip_cpu/i_cache.v"
	/* verilator lint_off DECLFILENAME */
module ysyx_22051013_rvcpu(
	input wire              clk		,
	input wire              rst		
		
);


//-----------------------------------------------out core------------------------//

//ifu axi_lite
wire 				axi_cache_valid	;
wire [`ysyx_22051013_DATA]	axi_cache_inst	;

wire				data_not_ready	;
wire				lsu_axi_we	;
wire				lsu_axi_re	;
wire	[7:0]			lsu_axi_wmask	;
wire	[`ysyx_22051013_PC]	lsu_axi_datapc	;
wire	[`ysyx_22051013_DATA]	lsu_axi_read_data;
wire	[`ysyx_22051013_DATA]	lsu_axi_write_data;


wire	[`ysyx_22051013_ID]	axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	axi_aw_addr	;
wire				axi_aw_valid	;
wire				axi_aw_ready	;

wire	[`ysyx_22051013_DATA]	axi_w_data	;
wire	[`ysyx_22051013_STRB]	axi_w_strb	;
wire				axi_w_valid	;
wire				axi_w_ready	;

wire	[`ysyx_22051013_ID]	axi_b_id	;
wire	[`ysyx_22051013_RESP]	axi_b_resp	;
wire				axi_b_valid	;
wire				axi_b_ready	;

wire	[`ysyx_22051013_ID]	axi_ar_id	;
wire	[`ysyx_22051013_ADDR]	axi_ar_addr	;	
wire				axi_ar_valid	;
wire				axi_ar_ready	;

wire	[`ysyx_22051013_ID]	axi_r_id	;
wire [`ysyx_22051013_DATA]	axi_r_data	;
wire [`ysyx_22051013_RESP]	axi_r_resp	;
wire				axi_r_valid	;
wire				axi_r_ready	;

//cache
wire	[`ysyx_22051013_PC]	cache_axi_pc	;
wire				cache_axi_ena	;
wire				cache_if_valid	;
wire	[`ysyx_22051013_INST]	cache_if_inst	;



//-------------------------------------------in core------------------------------------//

//bpu
//wire [`ysyx_22051013_REGADDR]   bpu_reg_addr ;
//wire				bpu_reg_ena; 
wire				bpu_ifid_jump;
wire [`ysyx_22051013_PC]    	bpu_if_pc    	;

//ifu
wire				if_cache_ready	;
 
//if_id_reg
 wire [`ysyx_22051013_INST]  	ifid_if_inst 	   ;
 wire [`ysyx_22051013_PC]    	ifid_if_pc    	   ;
 wire [`ysyx_22051013_INST]  	ifid_id_inst 	   ;
 wire [`ysyx_22051013_PC]    	ifid_id_pc    	   ;
 
 
 //wire [`ysyx_22051013_REGADDR]  ifid_id_addr ;
 wire				ifid_id_jump;
//idu
wire [`ysyx_22051013_REGADDR] id_reg_rs1_addr ;
wire [`ysyx_22051013_REGADDR] id_reg_rs2_addr ;

wire                          id_reg_rs1_ena	;
wire                          id_reg_rs2_ena	;
wire  [`ysyx_22051013_PC]  	     id_if_pc 	   ;
wire           			     id_if_pc_sel  ;
wire           			     id_ifid_jumpflush;
wire				id_load_flag;
wire				id_if_stall_ena;

//id_ex_reg
wire [`ysyx_22051013_INST]  	idex_id_inst 	 ;
wire [`ysyx_22051013_PC]    	idex_id_pc    	 ;   	   
wire [`ysyx_22051013_DATA] 	idex_id_op1 	;
wire [`ysyx_22051013_DATA] 	idex_id_op2 	;	
wire [`ysyx_22051013_IMM]     	idex_id_imm	;
wire                          	idex_id_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	idex_id_rd_addr ;
wire [3:0]      		idex_id_lsctl  	;
wire [1:0]      		idex_id_wbctl   ;
wire [3:0]      		idex_id_csrctl  ;
wire [7:0]			idex_id_alu_sel	;
 
wire [`ysyx_22051013_INST]  	idex_ex_inst 	 ;
wire [`ysyx_22051013_PC]    	idex_ex_pc    	 ;
wire [`ysyx_22051013_DATA] 	idex_ex_op1 	;
wire [`ysyx_22051013_DATA] 	idex_ex_op2 	;	
wire [`ysyx_22051013_IMM]     	idex_ex_imm	;
wire                          	idex_ex_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	idex_ex_rd_addr ;
wire [3:0]      		idex_ex_lsctl  	;
wire [1:0]      		idex_ex_wbctl   ;
wire [3:0]      		idex_ex_csrctl  ;
wire [7:0]			idex_ex_alu_sel	;


//exu

wire [`ysyx_22051013_REGADDR] 	ex_id_addr_forward;
wire [`ysyx_22051013_DATA] 	ex_id_data_forward;
wire				ex_load_ena;
//wire				ex_h_jump_ena;
wire  [`ysyx_22051013_PC]  	     ex_if_pc 	   ;
wire           			     ex_if_pc_sel  ;


wire  [`ysyx_22051013_REG]      exls_ex_aludata    ;
wire [`ysyx_22051013_DATA] 	exls_ex_store_data  ;


wire [`ysyx_22051013_INST]  	exls_ls_inst 	   ;
wire [`ysyx_22051013_PC]    	exls_ls_pc    	   ; 
wire  [`ysyx_22051013_REG]      exls_ls_aludata    ;
wire [`ysyx_22051013_DATA] 	exls_ls_store_data  ;
wire                          	exls_ls_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	exls_ls_rd_addr ;
wire [3:0]      		exls_ls_lsctl  	;
wire [1:0]      		exls_ls_wbctl   ;
/*
//lsu
wire [`ysyx_22051013_DATA]         ls_wb_data        ;
*/
wire [`ysyx_22051013_DATA] 	ls_lswb_data_forward;
wire [`ysyx_22051013_REGADDR] 	ls_id_addr_forward;
wire [`ysyx_22051013_DATA] 	ls_id_data_forward;
wire				data_ok;


//is_wb_reg
//wire [`ysyx_22051013_INST]  	lswb_ls_inst 	   ;
//wire [`ysyx_22051013_PC]    	lswb_ls_pc    	   ; 
//wire [1:0]      		lswb_ls_wbctl  	;
wire [`ysyx_22051013_DATA]      lswb_ls_wbdata        ;
//wire  [`ysyx_22051013_REG]      lswb_ls_aludata    ;
//wire                          	lswb_ls_rd_ena	;
//wire [`ysyx_22051013_REGADDR] 	lswb_ls_rd_addr ;

wire [`ysyx_22051013_INST]  	lswb_wb_inst 	   ;
wire [`ysyx_22051013_PC]    	lswb_wb_pc    	   ; 
wire [1:0]      		lswb_wb_wbctl  	;
wire [`ysyx_22051013_DATA]      lswb_wb_wbdata        ;
wire  [`ysyx_22051013_REG]      lswb_wb_aludata    ;
wire                          	lswb_wb_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	lswb_wb_rd_addr ;

//wbu
wire [`ysyx_22051013_DATA]	   wb_reg_rd_data     ;
wire                          	wb_reg_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	wb_reg_rd_addr ;

wire [`ysyx_22051013_REGADDR] 	wb_id_addr_forward;
wire [`ysyx_22051013_DATA] 	wb_id_data_forward;

// regfile
wire [`ysyx_22051013_REG] reg_id_rs1_data ;
wire [`ysyx_22051013_REG] reg_id_rs2_data ;
wire [`ysyx_22051013_REG] reg_bpu_data ;

//hzd_ctl
/*
wire	h_ifid_stall;
wire	h_idex_stall;
wire	h_exls_stall;
wire	h_lswb_stall;

wire	h_ifid_flush;
wire	h_idex_flush;
wire	h_if_pcstall;
*/
wire if_valid;
wire id_valid;
wire ex_valid;
wire ls_valid;

wire wb_ready;
wire ls_ready;
wire ex_ready;
wire id_ready;

wire ex_flush;
wire id_idex_flush;
wire id_ifid_flush;
wire ls_lswb_flush;




//-------------------------------------out core--------------------------------//

//ifu axi_lite
ysyx_22051013_axi_master_arbitrator axi_master_arbitrator0(
		.clk(clk)	,
		.rst(rst)	,
		.icache_pc(cache_axi_pc)	,
		.icache_ena(cache_axi_ena)	,
		.axi_inst(axi_cache_inst)	,
		.axi_inst_valid(axi_cache_valid)	,
		.data_pc(lsu_axi_datapc)	,
		.data_o(lsu_axi_read_data)	,
		.data_i(lsu_axi_write_data)	,
		.data_not_ready(data_not_ready)	,
		.we(lsu_axi_we),
		.re(lsu_axi_re),
		.data_ok(data_ok),
		.wmask(lsu_axi_wmask),
		
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)
);

ysyx_22051013_axi_slave axi_slave1(
		.clk(clk)	,
		.rst(rst)	,
		
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)
);

ysyx_22051013_i_cache i_cache2(
		.clk(clk),
		.rst(rst),
		
		.inst_pc(ifid_if_pc)	,
		.pc_ready(if_cache_ready)	,
		.inst(cache_if_inst)	,
		.inst_valid(cache_if_valid)	,
		
		.axi_pc(cache_axi_pc)	,
		.axi_ena(cache_axi_ena)	,
		.axi_inst(axi_cache_inst),
		.axi_valid(axi_cache_valid)
		
);

//--------------------------------------in core ---------------------------------//

ysyx_22051013_bpu_static bpu_static(
		.rst(rst)	,
		.inst(ifid_if_inst)	,
		.pc_i(ifid_if_pc)	,
		//.rs1_data(reg_bpu_data)	,
		//.rs1_addr(bpu_reg_addr)	,
		//.rs1_ena(bpu_reg_ena)	,
		.pc_o(bpu_if_pc)	,
		.bpu_jump(bpu_ifid_jump)
);



ysyx_22051013_ifu ifu0(
		.clk(clk)	,
		.rst(rst)	,
		//.pc_stall(h_if_pcstall)	,
		.id_pc_jump(id_if_pc_sel)  ,
 		.id_pc_i(id_if_pc)	,
		.ex_pc_jump(ex_if_pc_sel)  ,
 		.ex_pc_i(ex_if_pc)	,
 		.bpu_pc_i(bpu_if_pc)	,
 		.inst_valid(cache_if_valid),
 		.id_ready(id_ready)	,
 		.id_stall(id_if_stall_ena),
 		.if_valid(if_valid)	,
 		.core_ready(if_cache_ready),
 		.inst_i(cache_if_inst)	,
 		.inst_o(ifid_if_inst)	,		
		.pc_o(ifid_if_pc)
);

ysyx_22051013_reg_ifid reg_ifid1(
		.clk(clk)	,
		.rst(rst)	,
		//.ifid_flush(h_ifid_flush),
		//.ifid_stall(h_ifid_stall),
		.if_inst(ifid_if_inst),
		.if_pc(ifid_if_pc)	,
		.bpu_jump(bpu_ifid_jump),
		//.bpu_addr(bpu_reg_addr),
		
		.if_valid(if_valid),
		.id_stall(id_if_stall_ena),
		.id_flush(id_ifid_flush),
		.ex_flush(ex_flush),
		.id_ready(id_ready),

		.id_jump(ifid_id_jump),
		//.id_addr(ifid_id_addr),		
		.id_inst(ifid_id_inst)	,
		.id_pc(ifid_id_pc)	
);

ysyx_22051013_idu idu2(
	.rst(rst)	,
	.inst_i(ifid_id_inst)	,
	.pc_i(ifid_id_pc)	,
 	.pc_o(idex_id_pc)	,
 	.inst_o(idex_id_inst)	,
 	
 	.bpu_jump(ifid_id_jump),
	//.jalr_addr(ifid_id_addr),
 	
	.rs1_addr(id_reg_rs1_addr)	,
	.rs2_addr(id_reg_rs2_addr)	,
	.rs1_ena(id_reg_rs1_ena)	,
	.rs2_ena(id_reg_rs2_ena)	,
	.rs1_data(reg_id_rs1_data)	,
	.rs2_data(reg_id_rs2_data)	,
	.rd_ena(idex_id_rd_ena)		,
	.rd_addr(idex_id_rd_addr)	,
	
	//forward
	.ex_addr_forward(ex_id_addr_forward),
	.ls_addr_forward(ls_id_addr_forward),
	.wb_addr_forward(wb_id_addr_forward),
	.ex_data_forward(ex_id_data_forward),
	.ls_data_forward(ls_id_data_forward),
	.wb_data_forward(wb_id_data_forward),
	.ex_load_ena(ex_load_ena)	,
	
	.alusrc_o(idex_id_alu_sel)	,
	.lsctl_o(idex_id_lsctl)		,
 	.wbctl_o(idex_id_wbctl)		,
 	.csr_ctl(idex_id_csrctl)	,
 	.load_flag(id_load_flag)	,
 	
 	.if_valid(if_valid),
 	.id_valid(id_valid),
	.id_flush(id_ifid_flush),
	.id_ex_flush(id_idex_flush),
	.ex_ready(ex_ready),
	.id_ready(id_ready),
	.id_stall(id_if_stall_ena),
 	
	//.jump_flush(id_ifid_jumpflush)	,
	.jump_pc(id_if_pc)		,
	.jump_ena(id_if_pc_sel)	,
	//.id_stall_ena(id_h_stall_ena)	,
	.imm(idex_id_imm)		,
	.op1(idex_id_op1)		,
	.op2(idex_id_op2)
);

ysyx_22051013_reg_idex reg_idex3(
	.clk(clk)	,
	.rst(rst)	,
	.id_inst(idex_id_inst),
	//.idex_flush(h_idex_flush),
	//.idex_stall(h_idex_stall),
	.id_pc(idex_id_pc)	,
	.id_op1(idex_id_op1)	,
	.id_op2(idex_id_op2)	,
	.id_imm(idex_id_imm)	,
	.id_rd_ena(idex_id_rd_ena),
	.id_rd_addr(idex_id_rd_addr),
	.id_alusrc(idex_id_alu_sel),
	.id_lsctl(idex_id_lsctl),
	.id_wbctl(idex_id_wbctl),
	.id_csrctl(idex_id_csrctl),
	.id_load_flag(id_load_flag),
	
	.id_valid(id_valid),
	.id_flush(id_idex_flush),
	.ex_flush(ex_flush),
	.ex_ready(ex_ready),

	.ex_inst(idex_ex_inst),
	.ex_pc(idex_ex_pc)	,
	.ex_op1(idex_ex_op1)	,
	.ex_op2(idex_ex_op2)	,
	.ex_imm(idex_ex_imm)	,
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_alusrc(idex_ex_alu_sel),
	.ex_lsctl(idex_ex_lsctl),
	.ex_load_flag(ex_load_ena),
	.ex_csrctl(idex_ex_csrctl),
	.ex_wbctl(idex_ex_wbctl)
);


ysyx_22051013_exu exu4(
	.clk(clk)	,
	.rst(rst)	,
	.op1(idex_ex_op1)	,
	.op2(idex_ex_op2)	,
	.pc_i(idex_ex_pc)	,
	.imm(idex_ex_imm)	,
	.csr_ctl(idex_ex_csrctl),
	.alu_sel(idex_ex_alu_sel)	,
	
	.id_valid(id_valid),
	.ex_valid(ex_valid),
	.ex_flush(ex_flush),
	.ex_ready(ex_ready),
	.ls_ready(ls_ready),
	
	.exu_res(exls_ex_aludata)	,
	//.ex_jump_flush(ex_h_jump_ena),
	.ex_jump_pc(ex_if_pc)		,
	.ex_jump_ena(ex_if_pc_sel)	,	
	.store_data(exls_ex_store_data) 
	
);

ysyx_22051013_reg_exls reg_exls5(
	.clk(clk)	,
	.rst(rst)	,
	//.exls_stall(h_exls_stall),
	.ex_inst(idex_ex_inst),
	.ex_pc(idex_ex_pc)	,
	.ex_store_data(exls_ex_store_data),
	.ex_exu_res(exls_ex_aludata),
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_lsctl(idex_ex_lsctl),
	.ex_wbctl(idex_ex_wbctl),
	
	.ex_rd_addr_forward(ex_id_addr_forward),
	.ex_rd_data_forward(ex_id_data_forward),
	
	.ex_valid(ex_valid),
	.ls_ready(ls_ready),

	.ls_inst(exls_ls_inst),
	.ls_pc(exls_ls_pc),
	.ls_store_data(exls_ls_store_data),
	.ls_exu_res(exls_ls_aludata),
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_lsctl(exls_ls_lsctl),
	.ls_wbctl(exls_ls_wbctl)
);

ysyx_22051013_lsu lsu6(
 	.rst(rst)		,
 	.clk(clk)		,
 	.alu_res(exls_ls_aludata)	,
 	.store_data(exls_ls_store_data)	,
 	.ls_ctl	(exls_ls_lsctl) 	,
 	
 	.ex_valid(ex_valid),
 	.ls_valid(ls_valid),
	.ls_ready(ls_ready),
	.wb_ready(wb_ready),
	//.ls_flush(ls_lswb_flush),
	
	//axi
	.data_pc(lsu_axi_datapc)	,
	.data_o(lsu_axi_write_data)	,
	.data_i(lsu_axi_read_data)	,
	.data_not_ready(data_not_ready)	,
	.we(lsu_axi_we),
	.re(lsu_axi_re),
	.data_ok(data_ok),
	.wlen(lsu_axi_wmask),
 	
 	.ls_data_forward(ls_lswb_data_forward),
 	.ls_data_o(lswb_ls_wbdata)	
 );
 
 ysyx_22051013_reg_lswb reg_lswb7(
	.clk(clk)	,
	.rst(rst)	,
	//.lswb_stall(h_lswb_stall),
	.ls_inst(exls_ls_inst),
	.ls_pc(exls_ls_pc)	,
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_wbctl(exls_ls_wbctl),
	.ls_exu_res(exls_ls_aludata),
	.ls_wbdata(lswb_ls_wbdata),
	.ls_data_forward(ls_lswb_data_forward),
	
	.ls_rd_addr_forward(ls_id_addr_forward),
	.ls_rd_data_forward(ls_id_data_forward),
	
	.wb_ready(wb_ready),
	.ls_valid(ls_valid),
	//.ls_flush(ls_lswb_flush),
	
	.wb_inst(lswb_wb_inst),
	.wb_pc(lswb_wb_pc)	,
	.wb_rd_ena(lswb_wb_rd_ena),
	.wb_rd_addr(lswb_wb_rd_addr),
	.wb_wbctl(lswb_wb_wbctl),
	.wb_exu_res(lswb_wb_aludata),
	.wb_wbdata(lswb_wb_wbdata)
);
	
	

ysyx_22051013_wbu wbu8(
	.clk(clk)	,
 	.rst(rst),
 	.inst_i(lswb_wb_inst)	,
 	.pc_i(lswb_wb_pc)	,
 	
 	.rd_ena(lswb_wb_rd_ena),
 	.rd_addr(lswb_wb_rd_addr),
	.wb_rd_addr_forward(wb_id_addr_forward),
	.wb_rd_data_forward(wb_id_data_forward), 	
 	.wb_rd_ena(wb_reg_rd_ena),
 	.wb_rd_addr(wb_reg_rd_addr),
 	
	.wb_ready(wb_ready),
	.ls_valid(ls_valid), 	
 	
 	.ls_rd_data(lswb_wb_wbdata)	,
 	.wb_ctl(lswb_wb_wbctl)	,
 	.exu_res(lswb_wb_aludata)	,
 	.wb_data(wb_reg_rd_data )	
);

ysyx_22051013_regfile reg9(
	.clk(clk)	,
	.rst(rst)	,
	.waddr(wb_reg_rd_addr)	,
	.wdata(wb_reg_rd_data)	,
	.raddr1(id_reg_rs1_addr)	,
	.raddr2(id_reg_rs2_addr)	,
	.rdata1(reg_id_rs1_data)	,
	.rdata2(reg_id_rs2_data)	,
	.wen(wb_reg_rd_ena)	,
	.ren1(id_reg_rs1_ena)	,
	.ren2(id_reg_rs2_ena)	
	//.bpu_data(reg_bpu_data)	,
	//.bpu_en(bpu_reg_ena),
	//.bpu_addr(bpu_reg_addr)
);
/*
ysyx_22051013_hzd_ctl hzd_ctl10(
	.clk(clk)	,
	.rst(rst)	,
	.id_stall_ena(id_h_stall_ena),
	.id_jump_ena(id_ifid_jumpflush)	,
	.ex_jump_ena(ex_h_jump_ena)	,
	.inst_not_ready(inst_not_ready)	,
	
	.if_pc_stall(h_if_pcstall)	,
	.ifid_stall(h_ifid_stall)	,
	.idex_stall(h_idex_stall)	,
	.exls_stall(h_exls_stall)	,
	.lswb_stall(h_lswb_stall)	,
	
	.ifid_flush(h_ifid_flush)	,
	.idex_flush(h_idex_flush)
);*/
endmodule

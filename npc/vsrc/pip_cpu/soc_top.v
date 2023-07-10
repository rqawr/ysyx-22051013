 	`include "pip_cpu/define.v"
 	`include "pip_cpu/define_axi.v"
 	`include "pip_cpu/axi_master_arbitrator.v"
 	`include "pip_cpu/axi_slave.v"
	`include "pip_cpu/i_cache.v"
	`include "pip_cpu/dcache_device_sel.v"
	`include "pip_cpu/icache_device_sel.v"
	`include "pip_cpu/d_cache.v"
	`include "pip_cpu/xbar.v"
	`include "pip_cpu/rvcore.v"
	`include "pip_cpu/clint.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013(
	input				clock		,
	input				reset		
/*
	input				io_interrupt	,

	output	[3:0]			io_master_awid		,
	output	[31:0]			io_master_awaddr	,
	output	[7:0]			io_master_awlen		,
	output	[2:0]			io_master_awsize	,
	output	[1:0]			io_master_awburst	,
	output				io_master_awvalid	,
	input				io_master_awready	,

	output	[63:0]			io_master_wdata       ,
	output	[7:0]			io_master_wstrb       ,
	output				io_master_wlast       ,
	output				io_master_wvalid      ,
	input				io_master_wready      ,

	input	[3:0]			io_master_bid         ,
	input	[1:0]			io_master_bresp       ,
	input				io_master_bvalid      ,
	output				io_master_bready      ,

	output	[3:0]			io_master_arid        ,
	output	[31:0]			io_master_araddr      ,
	output	[7:0]			io_master_arlen       ,
	output	[2:0]			io_master_arsize      ,
	output	[1:0]			io_master_arburst     ,
	output				io_master_arvalid     ,
	input				io_master_arready     ,

	input	[3:0]			io_master_rid         ,
 	input	[63:0]			io_master_rdata       ,
	input	[1:0]			io_master_rresp       ,
	input				io_master_rlast       ,
	input				io_master_rvalid      ,
	output				io_master_rready      ,

	output				io_slave_awready      ,
	input				io_slave_awvalid      ,
	input	[3:0]			io_slave_awid         ,
	input	[31:0]			io_slave_awaddr       ,
	input	[7:0]			io_slave_awlen        ,
	input	[2:0]			io_slave_awsize       ,
	input	[1:0]			io_slave_awburst      ,
	output				io_slave_wready       ,
	input				io_slave_wvalid       ,
	input	[63:0]			io_slave_wdata        ,
	input	[7:0]			io_slave_wstrb        ,
	input				io_slave_wlast        ,
	input				io_slave_bready       ,
	output				io_slave_bvalid       , 
	output	[3:0]			io_slave_bid          ,
	output	[1:0]			io_slave_bresp        ,
	output				io_slave_arready      ,
	input				io_slave_arvalid      ,
	input	[3:0]			io_slave_arid         ,
 	input	[31:0]			io_slave_araddr       ,
	input	[7:0]			io_slave_arlen        ,
 	input	[2:0]			io_slave_arsize       ,
 	input	[1:0]			io_slave_arburst      ,
	input				io_slave_rready       ,
	output				io_slave_rvalid       ,
	output	[3:0]			io_slave_rid          ,
	output	[63:0]			io_slave_rdata        ,
	output	[1:0]			io_slave_rresp        ,
	output				io_slave_rlast        ,

	output	[5:0]			io_sram0_addr         ,
	output				io_sram0_cen          ,
	output				io_sram0_wen          ,
	output	[127:0]			io_sram0_wmask        ,
	output	[127:0]			io_sram0_wdata        ,
	input	[127:0]			io_sram0_rdata        ,
	output	[5:0]			io_sram1_addr         ,
	output				io_sram1_cen          ,
	output				io_sram1_wen          ,
	output	[127:0]			io_sram1_wmask        , 
	output	[127:0]			io_sram1_wdata        ,
	input	[127:0]			io_sram1_rdata        ,
	output	[5:0]			io_sram2_addr         ,
	output 				io_sram2_cen          ,
 	output				io_sram2_wen          ,
	output	[127:0]			io_sram2_wmask        ,
 	output	[127:0]			io_sram2_wdata        ,
	input	[127:0]			io_sram2_rdata        ,
	output 	[5:0]			io_sram3_addr         ,
	output				io_sram3_cen          ,
	output				io_sram3_wen          ,
	output	[127:0]			io_sram3_wmask        ,
	output	[127:0]			io_sram3_wdata        ,
	input 	[127:0]			io_sram3_rdata        ,
	output	[5:0]			io_sram4_addr         ,
	output				io_sram4_cen          ,
	output				io_sram4_wen          ,
	output	[127:0]			io_sram4_wmask        ,
	output	[127:0]			io_sram4_wdata        ,
	input	[127:0]			io_sram4_rdata        ,
	output	[5:0]			io_sram5_addr         ,
	output				io_sram5_cen          ,
	output				io_sram5_wen          ,
	output	[127:0]			io_sram5_wmask        ,
	output	[127:0]			io_sram5_wdata        ,
	input	[127:0]			io_sram5_rdata        ,
	output	[5:0]			io_sram6_addr         ,
	output				io_sram6_cen          ,
	output				io_sram6_wen          ,
	output	[127:0]			io_sram6_wmask        ,
	output	[127:0]			io_sram6_wdata        ,
	input	[127:0]			io_sram6_rdata        ,
	output	[5:0]			io_sram7_addr         ,
	output				io_sram7_cen          ,
	output				io_sram7_wen          ,
	output	[127:0]			io_sram7_wmask        ,
	output	[127:0]			io_sram7_wdata        ,
	input	[127:0]			io_sram7_rdata        */
);
	
	
/*	
//----------------------------------------------zero-signal--------------------------------------//
    assign io_sram2_addr    = 6'b000000  ;
    assign io_sram2_cen     = 1'b1       ;
    assign io_sram2_wen     = 1'b1       ;
    assign io_sram2_wmask   = 128'h0     ;
    assign io_sram2_wdata   = 128'h0     ;

    assign io_sram3_addr    = 6'b000000  ;
    assign io_sram3_cen     = 1'b1       ;
    assign io_sram3_wen     = 1'b1       ;
    assign io_sram3_wmask   = 128'h0     ;
    assign io_sram3_wdata   = 128'h0     ;

    assign io_sram4_addr    = 6'b000000  ;
    assign io_sram4_cen     = 1'b1       ;
    assign io_sram4_wen     = 1'b1       ;
    assign io_sram4_wmask   = 128'h0     ;
    assign io_sram4_wdata   = 128'h0     ;

    assign io_sram5_addr    = 6'b000000  ;
    assign io_sram5_cen     = 1'b1       ;
    assign io_sram5_wen     = 1'b1       ;
    assign io_sram5_wmask   = 128'h0     ;
    assign io_sram5_wdata   = 128'h0     ;

    assign io_sram6_addr    = 6'b000000  ;
    assign io_sram6_cen     = 1'b1       ;
    assign io_sram6_wen     = 1'b1       ;
    assign io_sram6_wmask   = 128'h0     ;
    assign io_sram6_wdata   = 128'h0     ;

    assign io_sram7_addr    = 6'b000000  ;
    assign io_sram7_cen     = 1'b1       ;
    assign io_sram7_wen     = 1'b1       ;
    assign io_sram7_wmask   = 128'h0     ;
    assign io_sram7_wdata   = 128'h0     ;
    
    
    
    assign io_slave_awready = 1'b0 ;
    assign io_slave_wready  = 1'b0 ;
    assign io_slave_bvalid  = 1'b0 ;
    assign io_slave_bid     = 4'b0000;
    assign io_slave_bresp   = 2'b00 ;
    assign io_slave_arready = 1'b0 ;
    assign io_slave_rvalid  = 1'b0 ;
    assign io_slave_rid     = 4'b0000;
    assign io_slave_rdata   = 64'h0 ;
    assign io_slave_rresp   = 2'b00 ;
    assign io_slave_rlast   = 1'b0  ;


*/


//ifu axi_lite


//master
wire	[`ysyx_22051013_ID]	axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	axi_aw_addr	;
wire				axi_aw_valid	;
wire				axi_aw_ready	;
wire	[7:0]			axi_aw_len	;
wire	[2:0]			axi_aw_size	;
wire	[1:0]			axi_aw_burst	;

wire	[`ysyx_22051013_DATA]	axi_w_data	;
wire	[`ysyx_22051013_STRB]	axi_w_strb	;
wire				axi_w_last	;
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
wire	[7:0]			axi_ar_len	;
wire	[2:0]			axi_ar_size	;
wire	[1:0]			axi_ar_burst	;

wire	[`ysyx_22051013_ID]	axi_r_id	;
wire	[`ysyx_22051013_DATA]	axi_r_data	;
wire	[`ysyx_22051013_RESP]	axi_r_resp	;
wire				axi_r_last	;
wire				axi_r_valid	;
wire				axi_r_ready	;

//soc
wire	[`ysyx_22051013_ID]	soc_axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	soc_axi_aw_addr	;
wire				soc_axi_aw_valid	;
wire				soc_axi_aw_ready	;
wire	[7:0]			soc_axi_aw_len	;
wire	[2:0]			soc_axi_aw_size	;
wire	[1:0]			soc_axi_aw_burst	;

wire	[`ysyx_22051013_DATA]	soc_axi_w_data	;
wire	[`ysyx_22051013_STRB]	soc_axi_w_strb	;
wire				soc_axi_w_last	;
wire				soc_axi_w_valid	;
wire				soc_axi_w_ready	;

wire	[`ysyx_22051013_ID]	soc_axi_b_id	;
wire	[`ysyx_22051013_RESP]	soc_axi_b_resp	;
wire				soc_axi_b_valid	;
wire				soc_axi_b_ready	;

wire	[`ysyx_22051013_ID]	soc_axi_ar_id	;
wire	[`ysyx_22051013_ADDR]	soc_axi_ar_addr	;	
wire				soc_axi_ar_valid	;
wire				soc_axi_ar_ready	;
wire	[7:0]			soc_axi_ar_len	;
wire	[2:0]			soc_axi_ar_size	;
wire	[1:0]			soc_axi_ar_burst	;

wire	[`ysyx_22051013_ID]	soc_axi_r_id	;
wire	[`ysyx_22051013_DATA]	soc_axi_r_data	;
wire	[`ysyx_22051013_RESP]	soc_axi_r_resp	;
wire				soc_axi_r_last	;
wire				soc_axi_r_valid	;
wire				soc_axi_r_ready	;

//clint
wire	[`ysyx_22051013_ID]	t_axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	;
wire				t_axi_aw_valid	;
wire				t_axi_aw_ready	;
wire	[7:0]			t_axi_aw_len	;
wire	[2:0]			t_axi_aw_size	;
wire	[1:0]			t_axi_aw_burst	;

wire	[`ysyx_22051013_DATA]	t_axi_w_data	;
wire	[`ysyx_22051013_STRB]	t_axi_w_strb	;
wire				t_axi_w_last	;
wire				t_axi_w_valid	;
wire				t_axi_w_ready	;

wire	[`ysyx_22051013_ID]	t_axi_b_id	;
wire	[`ysyx_22051013_RESP]	t_axi_b_resp	;
wire				t_axi_b_valid	;
wire				t_axi_b_ready	;

wire	[`ysyx_22051013_ID]	t_axi_ar_id	;
wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	;	
wire				t_axi_ar_valid	;
wire				t_axi_ar_ready	;
wire	[7:0]			t_axi_ar_len	;
wire	[2:0]			t_axi_ar_size	;
wire	[1:0]			t_axi_ar_burst	;

wire	[`ysyx_22051013_ID]	t_axi_r_id	;
wire	[`ysyx_22051013_DATA]	t_axi_r_data	;
wire	[`ysyx_22051013_RESP]	t_axi_r_resp	;
wire				t_axi_r_last	;
wire				t_axi_r_valid	;
wire				t_axi_r_ready	;

//icache

wire	[`ysyx_22051013_PC]	core_idsel_inst_pc;
wire				core_idsel_core_ready;
wire				idsel_core_inst_valid;
wire	[`ysyx_22051013_INST]	idsel_core_inst;
wire	[`ysyx_22051013_PC]    	idsel_core_pc;
		
wire				idsel_axi_re;
wire	[`ysyx_22051013_DATA]	axi_idsel_inst_i;
wire	[2:0]    		idsel_axi_inst_size;
wire	[`ysyx_22051013_PC]	idsel_axi_pc;
wire				axi_idsel_valid;
wire				icache_idsel_axi_re;
wire	[`ysyx_22051013_PC]	icache_idsel_axi_pc;
		
wire				idsel_icache_ena;
wire				idsel_icache_fencei;
wire	[`ysyx_22051013_INST]	icache_idsel_inst;
wire	[`ysyx_22051013_PC]	icache_core_pc;
wire	[`ysyx_22051013_PC]	idsel_icache_pc;
wire				icache_idsel_valid;
wire				idsel_icache_ready;

wire	[`ysyx_22051013_DATA]	axi_idsel_icache_inst;
wire				axi_idsel_icache_valid;

//dcache
wire				core_ddsel_we	;
wire				core_ddsel_re	;
wire	[7:0]			core_ddsel_wlen	;
wire	[`ysyx_22051013_PC]	core_ddsel_data_pc	;
wire	[`ysyx_22051013_DATA]	ddsel_core_data_temp;
wire	[`ysyx_22051013_DATA]	core_ddsel_ls_data;
wire				core_ddsel_core_ready;
wire				ddsel_core_data_valid;
wire				core_ddsel_fencei;

wire	[63:0]			core_ddsel_device_data;
wire	[2:0]			core_ddsel_data_size;

wire 				ddsel_axi_clint;
wire 				ddsel_axi_re;
wire 				ddsel_axi_we;

wire	[7:0]			ddsel_axi_mask;
wire	[`ysyx_22051013_DATA]	ddsel_axi_data_o;
wire	[`ysyx_22051013_DATA]	axi_ddsel_data_i;
wire	[`ysyx_22051013_PC]	ddsel_axi_pc;
wire 				axi_ddsel_valid;
wire	[2:0]			ddsel_axi_data_size;

wire				ddsel_dcache_fencei;		
wire 				ddsel_dcache_re;
wire 				ddsel_dcache_we;
wire	[7:0]			ddsel_dcache_mask;
wire	[`ysyx_22051013_DATA]	ddsel_dcache_data;
wire	[`ysyx_22051013_DATA]	dcache_ddsel_data;
wire	[`ysyx_22051013_PC]	ddsel_dcache_pc;
wire 				dcache_ddsel_valid;
wire 				ddsel_dcache_ready;
		
wire 				dcache_ddsel_axi_re;
wire 				dcache_ddsel_axi_we;
wire	[`ysyx_22051013_DATA]	axi_ddsel_dcache_data;
wire	[`ysyx_22051013_DATA]	dcache_ddsel_axi_data;
wire	[`ysyx_22051013_PC]	dcache_ddsel_axi_pc;
wire 				axi_ddsel_dcache_valid;
wire	time_interrupt;


ysyx_22051013_rvcore rvcore0(
		.clk(clock),
		.rst(reset),
		
		//ifu
		.if_pc(idsel_core_pc)	,
		.if_pc_next(core_idsel_inst_pc),
		.if_inst(idsel_core_inst),
		.if_core_ready(core_idsel_core_ready)	,
		.inst_valid(idsel_core_inst_valid)	,
		
		//lsu
		.we(core_ddsel_we),
		.re(core_ddsel_re),
		.fencei_o(core_ddsel_fencei),
		.id_core_ready(core_ddsel_core_ready),
		.data_pc(core_ddsel_data_pc),
		.data_temp(ddsel_core_data_temp),
		.device_data_o(core_ddsel_device_data),
		.ls_data_o(core_ddsel_ls_data),
		.data_size(core_ddsel_data_size),
		.wlen(core_ddsel_wlen),
		.data_valid(ddsel_core_data_valid),
		
		//interupt
		.time_interrupt(time_interrupt)
);

//ifu axi_lite
ysyx_22051013_axi_master_arbitrator axi_master_arbitrator1(
		.clk(clock),
		.rst(reset),
		.icache_pc(idsel_axi_pc)	,
		.icache_ena(idsel_axi_re)	,
		.inst_size(idsel_axi_inst_size)	,
		.axi_inst(axi_idsel_inst_i)	,
		.axi_inst_valid(axi_idsel_valid)	,
		
		.data_pc(ddsel_axi_pc)	,
		.data_o(axi_ddsel_data_i)	,
		.data_i(ddsel_axi_data_o)	,
		.axi_data_valid(axi_ddsel_valid)	,
		.we(ddsel_axi_we),
		.re(ddsel_axi_re),
		.clint_ena(ddsel_axi_clint)	,
		.wmask(ddsel_axi_mask),
		.data_size(ddsel_axi_data_size),
		
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		.axi_aw_len(axi_aw_len)	,
		.axi_aw_size(axi_aw_size)	,
		.axi_aw_burst(axi_aw_burst)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_last(axi_w_last)		,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		.axi_ar_len(axi_ar_len)	,
		.axi_ar_size(axi_ar_size)	,
		.axi_ar_burst(axi_ar_burst)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_last(axi_r_last)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)
);

ysyx_22051013_icache_device_sel icache_device_sel2(
		.clk(clock),
		.rst(reset),
		.core_addr(core_idsel_inst_pc),
		.core_ready(core_idsel_core_ready),
		.fencei(core_ddsel_fencei),
		.inst_valid(idsel_core_inst_valid),
		.inst(idsel_core_inst),
		.pc(idsel_core_pc),
		
		.axi_re(idsel_axi_re),
		.axi_inst_i(axi_idsel_inst_i),
		.axi_size(idsel_axi_inst_size),
		.axi_inst_pc(idsel_axi_pc),
		.axi_valid(axi_idsel_valid),
		.icache_axi_re(icache_idsel_axi_re),
		.icache_axi_pc(icache_idsel_axi_pc),
		
		.icache_ena(idsel_icache_ena),
		.icache_fencei(idsel_icache_fencei),
		.icache_inst_i(icache_idsel_inst),
		.icache_pc(icache_core_pc)	,
		.icache_inst_pc(idsel_icache_pc),
		.icache_valid(icache_idsel_valid),
		.icache_ready(idsel_icache_ready),
		
		
		.axi_icache_inst(axi_idsel_icache_inst),
		.axi_icache_valid(axi_idsel_icache_valid)
);

ysyx_22051013_i_cache i_cache3(
		.clk(clock),
		.rst(reset),
		
		.inst_pc(idsel_icache_pc)	,
		.pc_ready(idsel_icache_ready)	,
		.inst(icache_idsel_inst)	,
		.icache_ena(idsel_icache_ena),	
		.icache_valid(idsel_core_inst_valid),
		.pc(icache_core_pc),
		.fencei(idsel_icache_fencei),
		.i_valid(icache_idsel_valid)	,
		
		.axi_pc(icache_idsel_axi_pc)	,
		.axi_ena(icache_idsel_axi_re)	,
		.axi_inst(axi_idsel_icache_inst),
		.axi_valid(axi_idsel_icache_valid)
		
);

ysyx_22051013_dcache_device_sel dcache_device_sel4(
		.core_re(core_ddsel_re),
		.core_we(core_ddsel_we),
		.core_mask(core_ddsel_wlen),
		.core_data_i(core_ddsel_ls_data),
		.device_data_i(core_ddsel_device_data),
		.core_addr(core_ddsel_data_pc),
		.core_ready(core_ddsel_core_ready),
		.core_size(core_ddsel_data_size),
		.fencei(core_ddsel_fencei),
		.data_valid(ddsel_core_data_valid),
		.data_to_core(ddsel_core_data_temp),
		
		.clint_ena(ddsel_axi_clint),
		.axi_re(ddsel_axi_re),
		.axi_we(ddsel_axi_we),
		.axi_mask(ddsel_axi_mask),
		.axi_data_o(ddsel_axi_data_o),
		.axi_data_i(axi_ddsel_data_i),
		.axi_size(ddsel_axi_data_size),
		.axi_data_pc(ddsel_axi_pc),
		.axi_valid(axi_ddsel_valid),
		
		.dcache_re(ddsel_dcache_re),
		.dcache_we(ddsel_dcache_we),
		.dcache_fencei(ddsel_dcache_fencei),
		.dcache_mask(ddsel_dcache_mask),
		.dcache_data_o(ddsel_dcache_data),
		.dcache_data_i(dcache_ddsel_data),
		.dcache_data_pc(ddsel_dcache_pc),
		.dcache_valid(dcache_ddsel_valid),
		.dcache_ready(ddsel_dcache_ready),
		
		.dcache_axi_re(dcache_ddsel_axi_re),
		.dcache_axi_we(dcache_ddsel_axi_we),
		.axi_dcache_data(axi_ddsel_dcache_data),
		.dcache_axi_data(dcache_ddsel_axi_data),
		.dcache_axi_pc(dcache_ddsel_axi_pc),
		.axi_dcache_valid(axi_ddsel_dcache_valid)
);

ysyx_22051013_d_cache d_cache5(
		.clk(clock),
		.rst(reset),
		
		.data_pc(ddsel_dcache_pc)	,
		.data_i(ddsel_dcache_data)	,
		.data_o(dcache_ddsel_data)	,
		.core_ready(ddsel_dcache_ready)	,
		.wmask(ddsel_dcache_mask),
		.we(ddsel_dcache_we),
		.re(ddsel_dcache_re),
		.fencei(ddsel_dcache_fencei),
		.data_valid(dcache_ddsel_valid)	,
		
		.axi_pc(dcache_ddsel_axi_pc)	,
		.axi_r_ena(dcache_ddsel_axi_re)	,
		.axi_w_ena(dcache_ddsel_axi_we)	,
		.axi_data_i(axi_ddsel_dcache_data),
		.axi_data_o(dcache_ddsel_axi_data),
		.axi_valid(axi_ddsel_dcache_valid)
		
);

ysyx_22051013_xbar xbar6(
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		.axi_aw_len(axi_aw_len)	,
		.axi_aw_size(axi_aw_size)	,
		.axi_aw_burst(axi_aw_burst)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_last(axi_w_last)		,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		.axi_ar_len(axi_ar_len)	,
		.axi_ar_size(axi_ar_size)	,
		.axi_ar_burst(axi_ar_burst)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_last(axi_r_last)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)	,
	//soc
		.soc_axi_aw_id(soc_axi_aw_id)		,
		.soc_axi_aw_addr(soc_axi_aw_addr)	,
		.soc_axi_aw_valid(soc_axi_aw_valid)	,
		.soc_axi_aw_ready(soc_axi_aw_ready)	,
		.soc_axi_aw_len(soc_axi_aw_len)	,
		.soc_axi_aw_size(soc_axi_aw_size)	,
		.soc_axi_aw_burst(soc_axi_aw_burst)	,
		
		.soc_axi_w_data(soc_axi_w_data)		,
		.soc_axi_w_strb(soc_axi_w_strb)		,
		.soc_axi_w_valid(soc_axi_w_valid)	,
		.soc_axi_w_last(soc_axi_w_last)		,
		.soc_axi_w_ready(soc_axi_w_ready)	,
		
		.soc_axi_b_id(soc_axi_b_id)		,
		.soc_axi_b_resp(soc_axi_b_resp)		,
		.soc_axi_b_valid(soc_axi_b_valid)	,
		.soc_axi_b_ready(soc_axi_b_ready)	,
		
		.soc_axi_ar_id(soc_axi_ar_id)		,
		.soc_axi_ar_addr(soc_axi_ar_addr)	,
		.soc_axi_ar_valid(soc_axi_ar_valid)	,
		.soc_axi_ar_ready(soc_axi_ar_ready)	,
		.soc_axi_ar_len(soc_axi_ar_len)	,
		.soc_axi_ar_size(soc_axi_ar_size)	,
		.soc_axi_ar_burst(soc_axi_ar_burst)	,
		
		.soc_axi_r_id(soc_axi_r_id)		,
		.soc_axi_r_data(soc_axi_r_data)		,
		.soc_axi_r_last(soc_axi_r_last)		,
		.soc_axi_r_resp(soc_axi_r_resp)		,
		.soc_axi_r_valid(soc_axi_r_valid)	,
		.soc_axi_r_ready(soc_axi_r_ready)	,
	//clint	
		.t_axi_aw_id(t_axi_aw_id)		,
		.t_axi_aw_addr(t_axi_aw_addr)	,
		.t_axi_aw_valid(t_axi_aw_valid)	,
		.t_axi_aw_ready(t_axi_aw_ready)	,
		.t_axi_aw_len(t_axi_aw_len)	,
		.t_axi_aw_size(t_axi_aw_size)	,
		.t_axi_aw_burst(t_axi_aw_burst)	,
		
		.t_axi_w_data(t_axi_w_data)		,
		.t_axi_w_strb(t_axi_w_strb)		,
		.t_axi_w_valid(t_axi_w_valid)	,
		.t_axi_w_last(t_axi_w_last)		,
		.t_axi_w_ready(t_axi_w_ready)	,
		
		.t_axi_b_id(t_axi_b_id)		,
		.t_axi_b_resp(t_axi_b_resp)		,
		.t_axi_b_valid(t_axi_b_valid)	,
		.t_axi_b_ready(t_axi_b_ready)	,
		
		.t_axi_ar_id(t_axi_ar_id)		,
		.t_axi_ar_addr(t_axi_ar_addr)	,
		.t_axi_ar_valid(t_axi_ar_valid)	,
		.t_axi_ar_ready(t_axi_ar_ready)	,
		.t_axi_ar_len(t_axi_ar_len)	,
		.t_axi_ar_size(t_axi_ar_size)	,
		.t_axi_ar_burst(t_axi_ar_burst)	,
		
		.t_axi_r_id(t_axi_r_id)		,
		.t_axi_r_data(t_axi_r_data)		,
		.t_axi_r_last(t_axi_r_last)		,
		.t_axi_r_resp(t_axi_r_resp)		,
		.t_axi_r_valid(t_axi_r_valid)	,
		.t_axi_r_ready(t_axi_r_ready)
);				

ysyx_22051013_clint clint7(
	.clk(clock),
	.rst(reset),
	.time_interrupt(time_interrupt),
	
	.t_axi_aw_id(t_axi_aw_id)		,
	.t_axi_aw_addr(t_axi_aw_addr)	,
	.t_axi_aw_valid(t_axi_aw_valid)	,
	.t_axi_aw_ready(t_axi_aw_ready)	,
	.t_axi_aw_len(t_axi_aw_len)	,
	.t_axi_aw_size(t_axi_aw_size)	,
	.t_axi_aw_burst(t_axi_aw_burst)	,
	
	.t_axi_w_data(t_axi_w_data)		,
	.t_axi_w_strb(t_axi_w_strb)		,
	.t_axi_w_valid(t_axi_w_valid)	,
	.t_axi_w_last(t_axi_w_last)		,
	.t_axi_w_ready(t_axi_w_ready)	,
	
	.t_axi_b_id(t_axi_b_id)		,
	.t_axi_b_resp(t_axi_b_resp)		,
	.t_axi_b_valid(t_axi_b_valid)	,
	.t_axi_b_ready(t_axi_b_ready)	,
	
	.t_axi_ar_id(t_axi_ar_id)		,
	.t_axi_ar_addr(t_axi_ar_addr)	,
	.t_axi_ar_valid(t_axi_ar_valid)	,
	.t_axi_ar_ready(t_axi_ar_ready)	,
	.t_axi_ar_len(t_axi_ar_len)	,
	.t_axi_ar_size(t_axi_ar_size)	,
	.t_axi_ar_burst(t_axi_ar_burst)	,
	
	.t_axi_r_id(t_axi_r_id)		,
	.t_axi_r_data(t_axi_r_data)		,
	.t_axi_r_last(t_axi_r_last)		,
	.t_axi_r_resp(t_axi_r_resp)		,
	.t_axi_r_valid(t_axi_r_valid)	,
	.t_axi_r_ready(t_axi_r_ready)
);

ysyx_22051013_axi_slave axi_slave8(
		.clk(clock)	,
		.rst(reset)	,
		
		.axi_aw_id(soc_axi_aw_id)		,
		.axi_aw_addr(soc_axi_aw_addr)	,
		.axi_aw_valid(soc_axi_aw_valid)	,
		.axi_aw_ready(soc_axi_aw_ready)	,
		.axi_aw_len(soc_axi_aw_len)	,
		.axi_aw_size(soc_axi_aw_size)	,
		.axi_aw_burst(soc_axi_aw_burst)	,
		
		.axi_w_data(soc_axi_w_data)		,
		.axi_w_strb(soc_axi_w_strb)		,
		.axi_w_valid(soc_axi_w_valid)	,
		.axi_w_last(soc_axi_w_last)		,
		.axi_w_ready(soc_axi_w_ready)	,
		
		.axi_b_id(soc_axi_b_id)		,
		.axi_b_resp(soc_axi_b_resp)		,
		.axi_b_valid(soc_axi_b_valid)	,
		.axi_b_ready(soc_axi_b_ready)	,
		
		.axi_ar_id(soc_axi_ar_id)		,
		.axi_ar_addr(soc_axi_ar_addr)	,
		.axi_ar_valid(soc_axi_ar_valid)	,
		.axi_ar_ready(soc_axi_ar_ready)	,
		.axi_ar_len(soc_axi_ar_len)	,
		.axi_ar_size(soc_axi_ar_size)	,
		.axi_ar_burst(soc_axi_ar_burst)	,
		
		.axi_r_id(soc_axi_r_id)		,
		.axi_r_data(soc_axi_r_data)		,
		.axi_r_last(soc_axi_r_last)		,
		.axi_r_resp(soc_axi_r_resp)		,
		.axi_r_valid(soc_axi_r_valid)	,
		.axi_r_ready(soc_axi_r_ready)
);
endmodule

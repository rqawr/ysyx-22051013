
/*-------------------------------------------------
* 	Last modify date: 2023/7/8
* 	Function :pip pc generation 
-------------------------------------------------*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_ifu(
	// diff_pc_input
	input	wire					id_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		id_pc_i  	,
	input	wire					ie_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		ie_pc_i  	,
	input	wire					ls_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		ls_pc_i  	,
	input   wire	[`ysyx_22051013_PC]		bpu_pc_i  	,
	
	//stage control signal 
	input	wire					inst_valid	, 
	input	wire					id_ready	,
	input	wire					id_stall	,
	output  wire					if_valid	, 
	output  wire					core_ready	,
	
	//out sign
	input	wire	[`ysyx_22051013_INST]		inst_i	,
	input	wire	[`ysyx_22051013_PC]		pc_i	,
	output  wire	[`ysyx_22051013_PC]		pc_o	,
	output	wire	[`ysyx_22051013_INST]		inst_o	,
	output  wire	[`ysyx_22051013_PC]		pc_next		
 );
 
assign pc_next = 	ie_pc_jump ? ie_pc_i : 
			ls_pc_jump ? ls_pc_i :
			id_pc_jump ? id_pc_i :
			bpu_pc_i;
		
wire clean_stall = ie_pc_jump | ls_pc_jump;
wire stall = clean_stall ? 1'b0 : id_stall;
assign if_valid = (id_ready | stall) ? 1'b0 : ~inst_valid  ;
assign core_ready = (id_ready | stall);
assign inst_o = inst_i;
assign pc_o = pc_i;

endmodule


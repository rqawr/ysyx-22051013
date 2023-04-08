/*----------------
* Last modify date : 2023/3/24
* Function :
*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
 module ysyx_22051013_reg_ifid(
	 input wire			clk		,
	 input wire			rst		,
	 input wire			ifid_flush	,
	 input wire			ifid_stall	,
	 input wire [`ysyx_22051013_INST]	if_inst,
	 input wire [`ysyx_22051013_PC]		if_pc,
	 input wire				bpu_jump,
	 input wire [`ysyx_22051013_REGADDR]	bpu_addr,

	 output reg				id_jump,
	 output reg [`ysyx_22051013_REGADDR]	id_addr,
	 output reg [`ysyx_22051013_INST]	id_inst,
	 output reg [`ysyx_22051013_PC]		id_pc
 );
 

 always@(posedge clk) begin
	 if(rst == `ysyx_22051013_RSTABLE) begin 
		 id_inst <= 32'd0;
		 id_pc <= `ysyx_22051013_ZERO64;
		 id_jump <= 1'd0;
		 id_addr <= 5'd0;
	 end
	 else if(ifid_stall) begin
	 	 id_inst <= id_inst;
		 id_pc <= id_pc;
		 id_addr <= id_addr;
		 id_jump <= id_jump;
	 end
	 else if(ifid_flush) begin 
		 id_inst <= 32'd0;
		 id_pc <= `ysyx_22051013_ZERO64;
		 id_jump <= 1'd0;
		 id_addr <= 5'd0;
	 end
	 else begin
		 id_inst <= if_inst;
	   	 id_pc <= if_pc;
	   	 id_addr <= bpu_addr;
		 id_jump <= bpu_jump;
	 end
 end

 endmodule

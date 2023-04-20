/*------------
*
*
*/
`include "pip_cpu/define.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_hzd_ctl(
	input wire				clk		,
	input wire				rst		,
	input wire				id_stall_ena	,
	input wire				id_jump_ena	,
	input wire				ex_jump_ena	,
	input wire				inst_not_ready	,
	
	output wire				ifid_stall		,
	output wire				idex_stall		,
	output wire				exls_stall		,
	output wire				lswb_stall		,
	
	output wire				if_pc_stall		,

	output wire				ifid_flush		,
	output wire				idex_flush		
);

reg [3:0] stall_sum;

reg jump_sign;

always@(posedge clk) begin 	
	if(ex_jump_ena | id_jump_ena) begin 
		jump_sign <= 1'b1;
	end
	else begin 
		jump_sign <= 1'b0;
	end
end



always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin stall_sum = 4'b0000; end
	else if(id_stall_ena) begin stall_sum = 4'b1000; end
	else begin stall_sum = 4'b0000; end
end

assign {ifid_stall, idex_stall, exls_stall, lswb_stall } = stall_sum;
assign if_pc_stall = ifid_stall | (inst_not_ready == 1'b1 & ~(jump_sign)) | jump_sign;

assign ifid_flush = rst == `ysyx_22051013_RSTABLE ? 1'b0 : ex_jump_ena | id_jump_ena | inst_not_ready |jump_sign;
assign idex_flush = rst == `ysyx_22051013_RSTABLE ? 1'b0 : id_stall_ena;

endmodule


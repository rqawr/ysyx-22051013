/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_lsu_master(
	input wire		clk	,
	input wire		rst	,
	//to lsu
	input wire [`ysyx_22051013_PC]	inst_pc	,
	output reg [`ysyx_22051013_DATA]	inst_64,
	output reg			inst_not_ready,

	//read address channel
	output wire	[`ysyx_22051013_ADDR]	lsu_ar_addr	,	
	output wire			lsu_ar_valid	,
	input  wire			lsu_ar_ready	,
	
	//read data channel
	input wire [`ysyx_22051013_DATA]	lsu_r_data	,
	input wire [`ysyx_22051013_RESP]	lsu_r_resp	,
	input wire			lsu_r_valid	,
	output wire			lsu_r_ready	
);

wire rc_shakehand ;
assign rc_shakehand = lsu_r_valid & lsu_r_ready & (lsu_r_resp == 2'b00);

assign lsu_ar_addr = inst_pc;
assign lsu_ar_valid = `ysyx_22051013_ENABLE;
assign lsu_r_ready = `ysyx_22051013_ENABLE;

always@(*) begin
	if(rc_shakehand) begin
		inst_64 = lsu_r_data;
		inst_not_ready = 1'b0;
	end
	else begin 
		inst_64 = `ysyx_22051013_ZERO64;
		inst_not_ready = 1'b1;
	end
end

endmodule


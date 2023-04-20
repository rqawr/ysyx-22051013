/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_ifu_master(
	input wire		clk	,
	input wire		rst	,
	//to ifu
	input wire [`ysyx_22051013_PC]	inst_pc	,
	output reg [`ysyx_22051013_DATA]	inst_64,
	output reg			inst_not_ready,

	//read address channel
	output wire	[`ysyx_22051013_ADDR]	ifu_ar_addr	,	
	output wire			ifu_ar_valid	,
	input  wire			ifu_ar_ready	,
	
	//read data channel
	input wire [`ysyx_22051013_DATA]	ifu_r_data	,
	input wire [`ysyx_22051013_RESP]	ifu_r_resp	,
	input wire			ifu_r_valid	,
	output wire			ifu_r_ready	
);

wire rc_shakehand ;
assign rc_shakehand = ifu_r_valid & ifu_r_ready & (ifu_r_resp == 2'b00);

assign ifu_ar_addr = inst_pc;
assign ifu_ar_valid = `ysyx_22051013_ENABLE;
assign ifu_r_ready = `ysyx_22051013_ENABLE;

always@(*) begin
	if(rc_shakehand) begin
		inst_64 = ifu_r_data;
		inst_not_ready = 1'b0;
	end
	else begin 
		inst_64 = `ysyx_22051013_ZERO64;
		inst_not_ready = 1'b1;
	end
end

endmodule


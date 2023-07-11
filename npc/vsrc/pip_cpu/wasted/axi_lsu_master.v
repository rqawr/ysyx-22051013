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
	input wire [`ysyx_22051013_PC]	data_pc	,
	input wire [`ysyx_22051013_DATA] data_i,
	input wire			we,
	input wire			re,
	input wire [7:0]			wmask,
	output reg [`ysyx_22051013_DATA]	data_o,
	output reg			data_not_ready,

	//write address channel
	output wire	[`ysyx_22051013_ADDR]	lsu_aw_addr	,	
	output wire			lsu_aw_valid	,
	input  wire			lsu_aw_ready	,
	
	//write data channel
	output wire [`ysyx_22051013_DATA]	lsu_w_data	,
	output wire [`ysyx_22051013_STRB]	lsu_w_strb	,
	output wire			lsu_w_valid	,
	input wire			lsu_w_ready	,
	
	//write respond channel
	input wire [`ysyx_22051013_RESP]	lsu_b_resp	,	
	input wire			lsu_b_valid	,
	output wire			lsu_b_ready	,
	
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
//write
wire bc_shakehand = lsu_b_valid & lsu_b_ready;

assign lsu_aw_addr = data_pc;
assign lsu_aw_valid = we ;
assign lsu_w_data = data_i;
assign lsu_w_strb = wmask;
assign lsu_w_valid = we;
assign lsu_b_ready = `ysyx_22051013_ENABLE;

wire data_w_not_ready = ~(lsu_b_ready & lsu_b_valid);



//read 
wire rc_shakehand ;
assign rc_shakehand = lsu_r_valid & lsu_r_ready & (lsu_r_resp == 2'b00);

assign lsu_ar_addr = data_pc;
assign lsu_ar_valid = re ;
assign lsu_r_ready = `ysyx_22051013_ENABLE;

reg data_r_not_ready;

always@(*) begin
	if(rc_shakehand) begin
		data_o = lsu_r_data;
		data_r_not_ready = 1'b0;
	end
	else begin 
		data_o = `ysyx_22051013_ZERO64;
		data_r_not_ready = 1'b1;
	end
end

assign data_not_ready = re ? data_r_not_ready : we ? data_w_not_ready : 1'b0;

endmodule


/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : xbar (device select)
---------------------------------------*/
`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_xbar(
//master
	//write address channel
	input	wire 	[`ysyx_22051013_ID]	axi_aw_id	,
	input	wire	[`ysyx_22051013_ADDR]	axi_aw_addr	,	
	input	wire				axi_aw_valid	,
	output	wire				axi_aw_ready	,
	input	wire	[7:0]			axi_aw_len	,
	input	wire	[2:0]			axi_aw_size	,
	input	wire	[1:0]			axi_aw_burst	,
	
	//write data channel
	input	wire	[`ysyx_22051013_DATA]	axi_w_data	,
	input	wire	[`ysyx_22051013_STRB]	axi_w_strb	,
	input	wire				axi_w_last	,
	input	wire				axi_w_valid	,
	output	wire				axi_w_ready	,
	
	//write respond channel
	output	wire	[`ysyx_22051013_ID]	axi_b_id	,
	output	wire	[`ysyx_22051013_RESP]	axi_b_resp	,	
	output	wire				axi_b_valid	,
	input	wire				axi_b_ready	,
	
	//read address channel
	input	wire	[`ysyx_22051013_ID]	axi_ar_id	,
	input	wire	[`ysyx_22051013_ADDR]	axi_ar_addr	,
	input	wire	[7:0]			axi_ar_len	,
	input	wire	[2:0]			axi_ar_size	,
	input	wire	[1:0]			axi_ar_burst	,	
	input	wire				axi_ar_valid	,
	output	wire				axi_ar_ready	,
	
	//read data channel
	output	wire	[`ysyx_22051013_ID]	axi_r_id	,
	output	wire	[`ysyx_22051013_DATA]	axi_r_data	,
	output	wire	[`ysyx_22051013_RESP]	axi_r_resp	,
	output	wire				axi_r_last	,
	output	wire				axi_r_valid	,
	input	wire				axi_r_ready	,
//soc
//write address channel
	output	wire 	[`ysyx_22051013_ID]	soc_axi_aw_id	,
	output	wire	[`ysyx_22051013_ADDR]	soc_axi_aw_addr	,	
	output	wire				soc_axi_aw_valid	,
	input	wire				soc_axi_aw_ready	,
	output	wire	[7:0]			soc_axi_aw_len	,
	output	wire	[2:0]			soc_axi_aw_size	,
	output	wire	[1:0]			soc_axi_aw_burst	,
	
	//write data channel
	output	wire	[`ysyx_22051013_DATA]	soc_axi_w_data	,
	output	wire	[`ysyx_22051013_STRB]	soc_axi_w_strb	,
	output	wire				soc_axi_w_last	,
	output	wire				soc_axi_w_valid	,
	input	wire				soc_axi_w_ready	,
	
	//write respond channel
	input	wire	[`ysyx_22051013_ID]	soc_axi_b_id	,
	input	wire	[`ysyx_22051013_RESP]	soc_axi_b_resp	,	
	input	wire				soc_axi_b_valid	,
	output	wire				soc_axi_b_ready	,
	
	//read address channel
	output	wire	[`ysyx_22051013_ID]	soc_axi_ar_id	,
	output	wire	[`ysyx_22051013_ADDR]	soc_axi_ar_addr	,
	output	wire	[7:0]			soc_axi_ar_len	,
	output	wire	[2:0]			soc_axi_ar_size	,
	output	wire	[1:0]			soc_axi_ar_burst	,	
	output	wire				soc_axi_ar_valid	,
	input	wire				soc_axi_ar_ready	,
	
	//read data channel
	input	wire	[`ysyx_22051013_ID]	soc_axi_r_id	,
	input	wire	[`ysyx_22051013_DATA]	soc_axi_r_data	,
	input	wire	[`ysyx_22051013_RESP]	soc_axi_r_resp	,
	input	wire				soc_axi_r_last	,
	input	wire				soc_axi_r_valid	,
	output	wire				soc_axi_r_ready	,
//clint
	//write address channel
	output	wire 	[`ysyx_22051013_ID]	t_axi_aw_id	,
	output	wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	,	
	output	wire				t_axi_aw_valid	,
	input	wire				t_axi_aw_ready	,
	output	wire	[7:0]			t_axi_aw_len	,
	output	wire	[2:0]			t_axi_aw_size	,
	output	wire	[1:0]			t_axi_aw_burst	,
	
	//write data channel
	output	wire	[`ysyx_22051013_DATA]	t_axi_w_data	,
	output	wire	[`ysyx_22051013_STRB]	t_axi_w_strb	,
	output	wire				t_axi_w_last	,
	output	wire				t_axi_w_valid	,
	input	wire				t_axi_w_ready	,
	
	//write respond channel
	input	wire	[`ysyx_22051013_ID]	t_axi_b_id	,
	input	wire	[`ysyx_22051013_RESP]	t_axi_b_resp	,	
	input	wire				t_axi_b_valid	,
	output	wire				t_axi_b_ready	,
	
	//read address channel
	output	wire	[`ysyx_22051013_ID]	t_axi_ar_id	,
	output	wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	,
	output	wire	[7:0]			t_axi_ar_len	,
	output	wire	[2:0]			t_axi_ar_size	,
	output	wire	[1:0]			t_axi_ar_burst	,	
	output	wire				t_axi_ar_valid	,
	input	wire				t_axi_ar_ready	,
	
	//read data channel
	input	wire	[`ysyx_22051013_ID]	t_axi_r_id	,
	input	wire	[`ysyx_22051013_DATA]	t_axi_r_data	,
	input	wire	[`ysyx_22051013_RESP]	t_axi_r_resp	,
	input	wire				t_axi_r_last	,
	input	wire				t_axi_r_valid	,
	output	wire				t_axi_r_ready	
);

wire clint_read = axi_ar_id == 4'd2;
wire clint_write = axi_aw_id == 4'd2;

assign t_axi_aw_id =	clint_write ? axi_aw_id 	: 4'd0;
assign t_axi_aw_addr =	clint_write ? axi_aw_addr 	: 64'd0;
assign t_axi_aw_valid =	clint_write ? axi_aw_valid 	: 1'd0;
assign t_axi_aw_len =	clint_write ? axi_aw_len 	: 8'd0;
assign t_axi_aw_size =	clint_write ? axi_aw_size 	: 3'd0;
assign t_axi_aw_burst =	clint_write ? axi_aw_burst 	: 2'd0;
assign t_axi_w_data =	clint_write ? axi_w_data 	: 64'd0;
assign t_axi_w_strb = 	clint_write ? axi_w_strb 	: 8'd0;
assign t_axi_w_last =	clint_write ? axi_w_last 	: 1'd0;
assign t_axi_w_valid =	clint_write ? axi_w_valid 	: 1'd0;
assign t_axi_b_ready = 	clint_write ? axi_b_ready 	: 1'd0;


assign soc_axi_aw_id =		~clint_write ? axi_aw_id 	: 4'd0;
assign soc_axi_aw_addr =	~clint_write ? axi_aw_addr 	: 64'd0;
assign soc_axi_aw_valid =	~clint_write ? axi_aw_valid 	: 1'd0;
assign soc_axi_aw_len =		~clint_write ? axi_aw_len 	: 8'd0;
assign soc_axi_aw_size =	~clint_write ? axi_aw_size 	: 3'd0;
assign soc_axi_aw_burst =	~clint_write ? axi_aw_burst 	: 2'd0;
assign soc_axi_w_data =		~clint_write ? axi_w_data 	: 64'd0;
assign soc_axi_w_strb = 	~clint_write ? axi_w_strb 	: 8'd0;
assign soc_axi_w_last =		~clint_write ? axi_w_last 	: 1'd0;
assign soc_axi_w_valid =	~clint_write ? axi_w_valid 	: 1'd0;
assign soc_axi_b_ready = 	~clint_write ? axi_b_ready 	: 1'd0;



assign t_axi_ar_id =	clint_read ? axi_ar_id		: 4'd0;
assign t_axi_ar_addr =	clint_read ? axi_ar_addr	: 64'd0;
assign t_axi_ar_valid =	clint_read ? axi_ar_valid	: 1'd0;
assign t_axi_ar_len =	clint_read ? axi_ar_len		: 8'd0;
assign t_axi_ar_size =	clint_read ? axi_ar_size	: 3'd0;
assign t_axi_ar_burst =	clint_read ? axi_ar_burst	: 2'd0;
assign t_axi_r_ready =	clint_read ? axi_r_ready	: 1'd0;

assign soc_axi_ar_id =		~clint_read ? axi_ar_id		: 4'd0;
assign soc_axi_ar_addr =	~clint_read ? axi_ar_addr	: 64'd0;
assign soc_axi_ar_valid =	~clint_read ? axi_ar_valid	: 1'd0;
assign soc_axi_ar_len =		~clint_read ? axi_ar_len	: 8'd0;
assign soc_axi_ar_size =	~clint_read ? axi_ar_size	: 3'd0;
assign soc_axi_ar_burst =	~clint_read ? axi_ar_burst	: 2'd0;
assign soc_axi_r_ready =	~clint_read ? axi_r_ready	: 1'd0;



assign axi_aw_ready =	clint_write ? t_axi_aw_ready 	: soc_axi_aw_ready;
assign axi_w_ready = 	clint_write ? t_axi_w_ready 	: soc_axi_w_ready;
assign axi_b_id =	clint_write ? t_axi_b_id	: soc_axi_b_id;
assign axi_b_resp =	clint_write ? t_axi_b_resp 	: soc_axi_b_resp;
assign axi_b_valid =	clint_write ? t_axi_b_valid	: soc_axi_b_valid;

assign axi_ar_ready =	clint_read ? t_axi_ar_ready	: soc_axi_ar_ready;
assign axi_r_id =	clint_read ? t_axi_r_id		: soc_axi_r_id;
assign axi_r_data =	clint_read ? t_axi_r_data	: soc_axi_r_data;
assign axi_r_last =	clint_read ? t_axi_r_last	: soc_axi_r_last;
assign axi_r_resp =	clint_read ? t_axi_r_resp 	: soc_axi_r_resp;
assign axi_r_valid =	clint_read ? t_axi_r_valid	: soc_axi_r_valid;


endmodule












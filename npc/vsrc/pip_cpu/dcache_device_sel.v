/*

*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"

module ysyx_22051013_dcache_device_sel(
	input wire		core_re	,
	input wire		core_we	,
	input wire [7:0]	core_mask	,
	input wire [`ysyx_22051013_DATA]	core_data_i	,
	input wire [`ysyx_22051013_DATA]	device_data_i	,
	input wire [`ysyx_22051013_PC]		core_addr	,
	input wire		core_ready	,
	input wire	[2:0]	core_size	,
		
	output wire		data_valid	,
	output wire [`ysyx_22051013_DATA]	data_to_core	,
	
	output wire		clint_ena	,
	output wire		axi_re	,
	output wire		axi_we	,
	output wire [7:0]	axi_mask	,
	output wire [`ysyx_22051013_DATA]	axi_data_o	,
	output wire [`ysyx_22051013_PC]		axi_data_pc	,
	output	wire	[2:0]			axi_size	,
	input wire		axi_valid	,
	input wire [`ysyx_22051013_DATA]	axi_data_i	, 
	
	output wire		dcache_re	,
	output wire		dcache_we	,
	output wire [7:0]	dcache_mask	,
	output wire [`ysyx_22051013_DATA]	dcache_data_o	,
	output wire [`ysyx_22051013_PC]		dcache_data_pc	,
	output wire		dcache_ready	,
	input wire		dcache_valid	,
	input wire [`ysyx_22051013_DATA]	dcache_data_i	,
	
	input wire		dcache_axi_re	,
	input wire		dcache_axi_we	,
	input wire [`ysyx_22051013_PC]		dcache_axi_pc	,
	input wire [`ysyx_22051013_DATA]	dcache_axi_data	,
	output wire [`ysyx_22051013_DATA]	axi_dcache_data	,
	output wire		axi_dcache_valid
);

wire device_ena;

assign clint_ena = ((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END));

assign device_ena =/*1'b1; */((core_addr >= `ysyx_22051013_UART_START) & (core_addr <= `ysyx_22051013_UART_END)) | 
		((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END)) |
		((core_addr >= `ysyx_22051013_RTC_START) & (core_addr <= `ysyx_22051013_RTC_END)) | 
		((core_addr >= `ysyx_22051013_VGAC_START) & (core_addr <= `ysyx_22051013_VGAC_END)) | 
		((core_addr >= `ysyx_22051013_VMEM_START) & (core_addr <= `ysyx_22051013_VMEM_END)) | 
		((core_addr >= `ysyx_22051013_KBD_START) & (core_addr <= `ysyx_22051013_KBD_END)) ;

//to dcache
assign dcache_re = ~device_ena ? core_re : `ysyx_22051013_DISABLE;
assign dcache_we = ~device_ena ? core_we : `ysyx_22051013_DISABLE;
assign dcache_mask = ~device_ena ? core_mask : 8'd0;
assign dcache_data_pc = ~device_ena ? core_addr : `ysyx_22051013_ZERO64;
assign dcache_data_o = ~device_ena ? core_data_i : `ysyx_22051013_ZERO64;
assign dcache_ready = ~device_ena ? core_ready : `ysyx_22051013_DISABLE;

assign axi_dcache_data = ~device_ena ? axi_data_i : `ysyx_22051013_ZERO64;
assign axi_dcache_valid = ~device_ena ? axi_valid : `ysyx_22051013_DISABLE;

// to axi
assign axi_re = device_ena & ~core_ready ? core_re : dcache_axi_re;
assign axi_we = device_ena & ~core_ready ? core_we : dcache_axi_we;
assign axi_data_pc = device_ena ? core_addr : dcache_axi_pc;
assign axi_data_o = device_ena  ? device_data_i : dcache_axi_data;
assign axi_mask = device_ena  ? core_mask :  ~device_ena ? 8'hff : 8'h0;

assign axi_size = device_ena ? core_size : 3'b110;

//to core
assign data_valid = device_ena ? ~axi_valid : dcache_valid ;
assign data_to_core = device_ena ? axi_data_i : dcache_data_i;


endmodule
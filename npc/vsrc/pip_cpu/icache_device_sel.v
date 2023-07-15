
/*------------------------------------
* Last modify date: 2023/7/2
* Function : icache device select
------------------------------------*/
`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_icache_device_sel(
	input	wire				clk	,
	input	wire				rst	,
	//core
	input	wire	[`ysyx_22051013_PC]	core_addr	,
	input	wire				core_ready	,
	input	wire				fencei	,	
	//input	wire				jump		,
	
	output	wire				inst_valid	,
	output	wire	[`ysyx_22051013_DATA]	pc	,
	output	wire	[`ysyx_22051013_INST]	inst	,
	
	//axi
	output	wire				axi_re	,
	output	wire	[`ysyx_22051013_PC]	axi_inst_pc	,
	output	wire	[2:0]			axi_size	,
	input	wire				axi_valid	,
	input	wire	[`ysyx_22051013_DATA]	axi_inst_i	, 
	input	wire				icache_axi_re	,
	input	wire	[`ysyx_22051013_PC]	icache_axi_pc	,
	output	wire	[`ysyx_22051013_DATA]	axi_icache_inst	,
	output	wire				axi_icache_valid,
	
	//icache
	output	wire				icache_ena	,
	output	wire	[`ysyx_22051013_PC]	icache_inst_pc	,
	output	wire				icache_ready	,
	output	wire				icache_fencei	,
	input	wire				icache_valid	,
	input	wire	[`ysyx_22051013_PC]	icache_pc	,
	input	wire	[`ysyx_22051013_INST]	icache_inst_i	
);

wire mem_ena;

assign mem_ena =((core_addr >= `ysyx_22051013_MEM_START) & (core_addr <= `ysyx_22051013_MEM_END)) ;

wire clint_ena;
assign clint_ena = ((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END));

//wire apb_ena;
//assign apb_ena = ((pc >= `ysyx_22051013_APB_START) & (pc <= `ysyx_22051013_APB_END));

reg sel_now;
reg core_re;
reg [63:0]	pc_now;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		sel_now <= `ysyx_22051013_DISABLE;
		core_re <= `ysyx_22051013_DISABLE;
		pc_now <= `ysyx_22051013_ZERO64;
	end
	else if(core_ready | ~inst_valid) begin 
		sel_now <= sel_now;
		core_re <= core_re;
		pc_now <= pc_now;
	end
	else begin
		sel_now <= mem_ena;
		core_re <= ~mem_ena;
		pc_now <= core_addr;
	end
end

//to icache
assign icache_fencei = fencei;
assign icache_ena = /*core_ready ? 1'b0 : */mem_ena;
assign icache_inst_pc = mem_ena ? core_addr : `ysyx_22051013_ZERO64;
assign icache_ready = mem_ena ? core_ready : `ysyx_22051013_DISABLE;


assign axi_icache_inst = sel_now ? axi_inst_i : `ysyx_22051013_ZERO64;
assign axi_icache_valid = sel_now ? axi_valid : `ysyx_22051013_DISABLE;

// to axi
assign axi_re = sel_now /*& ~core_ready */? icache_axi_re : 
		~sel_now & ~clint_ena & ~core_ready ? core_re :
		1'b0;
		
assign axi_inst_pc = ~sel_now ? pc_now : icache_axi_pc;

assign axi_size = sel_now ? 3'b011 : 
			//apb_ena ? 3'b010 : 
			3'b000;

//to core
assign inst_valid = ~sel_now ? ~(axi_re & ~axi_valid) : icache_valid ;
assign inst = ~sel_now ? axi_inst_i[31:0] : icache_inst_i;
assign pc = sel_now ? icache_pc : pc_now;

endmodule

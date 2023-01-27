module top(
	input			clk	,
	input			reset	,
	input				ps2_clk,
	input				ps2_data,
	
	output reg [13:0] null_seg,
	output reg [27:0] res_seg,
	output reg [13:0] num_seg,
	output		VGA_CLK,
	output		VGA_HSYNC,
	output    VGA_VSYNC,
	output    VGA_BLANK_N,
	output	[7:0]	VGA_R,	
	output  [7:0] VGA_G,  
	output  [7:0] VGA_B  


);
assign VGA_CLK=clk;
wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] data;
wire [7:0] ascii;


vga_ctrl my_vga_ctrl(
	    .pclk(clk),
			.reset(reset),
	    .vga_data(data),
		  .h_addr(h_addr),
			.v_addr(v_addr),
	 		.hsync(VGA_HSYNC),
			.vsync(VGA_VSYNC),
			.valid(VGA_BLANK_N),
			.vga_r(VGA_R),
			.vga_g(VGA_G),
			.vga_b(VGA_B)
		);
rom my_rom(
	.clk(clk),
	.ps2_clk(ps2_clk),
	.v_addr(v_addr),
	.h_addr(h_addr),
	.ascii(ascii),
	.data(data)
	
);

ps2top my_ps2(
			.clk(clk),
			.reset(reset),
			.ps2_clk(ps2_clk),
			.ps2_data(ps2_data),
			.asc(ascii),
			.null_seg(null_seg),
			.res_seg(res_seg),
			.num_seg(num_seg)
		);	

endmodule



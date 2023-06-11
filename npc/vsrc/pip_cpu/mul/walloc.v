`include "pip_cpu/mul/walloc1.v"
module ysyx_22051013_walloc(
	input wire				clk	,
	input wire				rst	,
	input wire				flush	,
	input wire [4355:0]	part_add	,
	input wire [31:0]	part_c  ,
	output wire		op2_1	,
	output wire		addr_cin,
	output wire [131:0]	re_op1	,
	output wire [131:0] 	re_op2
);

wire [29:0] c_mid[132:0]/*verilator split_var*/;

wire [527:0]l4_c_temp;
wire [395:0]l4_s_temp;

ysyx_22051013_walloc1 w0(.part_add(part_add[32:0]), .cin({r_c,part_c[21:0]}), .l4_c(l4_c_temp[3:0]), .l4_s(l4_s_temp[2:0]), .l4_c_i(l4_c_i[3:0]), .l4_s_i(l4_s_i[2:0]), .cout(c_mid[0]), .s(re_op1[0]), .c(re_op2[0]));
generate 
	 for(genvar m=1; m<132; m=m+1) begin: walloc_array
		ysyx_22051013_walloc1 w1(.part_add(part_add[(m+1)*33-1 -: 33]), .cin(c_mid[m-1]), .l4_c(l4_c_temp[(m+1)*4-1 -:4]), .l4_s(l4_s_temp[(m+1)*3-1 -:3]), .l4_c_i(l4_c_i[(m+1)*4-1 -:4]), .l4_s_i(l4_s_i[(m+1)*3-1 -:3]), .cout(c_mid[m]), .s(re_op1[m]), .c(re_op2[m]));
	end
endgenerate


//reg 2-3
reg c1_temp;
reg c2_temp;
reg [7:0] r_c;

reg [527:0]l4_c_i;
reg [395:0]l4_s_i;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE | flush) begin 
		l4_c_i <= 528'd0;
		l4_s_i <= 396'd0;
		r_c <= 8'd0;
		c1_temp <= 1'b0;
		c2_temp <= 1'b0;
	end
	else begin 
		l4_c_i <= l4_c_temp;
		l4_s_i <= l4_s_temp;
		r_c <= part_c[29:22];
		c1_temp <= part_c[30];
		c2_temp <= part_c[31];
	end
end

assign op2_1 =c1_temp ;//part_c[30];
assign addr_cin =c2_temp;// part_c[31];


//wire unused_ok = &{c_mid[132]};
endmodule

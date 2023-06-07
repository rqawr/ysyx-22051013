`include "pip_cpu/mul/csa.v"
module ysyx_22051013_walloc1(
	input wire [32:0]		part_add,
	input wire [29:0]		cin,
	
	//output wire [2:0]		l4_s,
	//output wire [7:0]		l_c,
	//input wire [7:0]		l4_c_i,
	//input wire [2:0]		l4_s_i,
	
	output wire [29:0]		cout,
	output wire				s,
	output wire				c
);


//-----------------------layer1-------------------------//
wire [10:0] l1_s;
wire [10:0] l1_c;
generate 
	for(genvar i = 0; i<11; i=i+1) begin: layer1
		ysyx_22051013_csa csa1(.in(part_add[(i+1)*3-1 -: 3]), .cout(l1_c[i]), .s(l1_s[i]));
	end
endgenerate

//----------------------layer2---------------------------//
wire [6:0] l2_s;
wire [6:0] l2_c;
wire [20:0] l2_add ;
assign l2_add = {l1_s,cin[9:0]};

generate 
	for(genvar i=0; i<7; i=i+1) begin: layer2
		ysyx_22051013_csa csa2(.in(l2_add[(i+1)*3-1 -: 3]), .cout(l2_c[i]), .s(l2_s[i]));
	end
endgenerate

//---------------------layer3-----------------------------//
wire [4:0] l3_s;
wire [4:0] l3_c;
wire [14:0] l3_add = {l2_s,cin[17:10]};

generate 
	for(genvar j=0; j<5; j=j+1) begin: layer3
		ysyx_22051013_csa csa3(.in(l3_add[(j+1)*3-1 -: 3]), .cout(l3_c[j]), .s(l3_s[j]));
	end
endgenerate

//---------------------layer4-----------------------------//
wire [2:0] l4_c;
wire [2:0] l4_s;
wire [8:0] l4_add = {l3_s,cin[21:18]};

generate 
	for(genvar k=0; k<3; k=k+1) begin: layer4
		ysyx_22051013_csa csa4(.in(l4_add[(k+1)*3-1 -: 3]), .cout(l4_c[k]), .s(l4_s[k]));
	end
endgenerate

//---------------------layer5-----------------------------//
wire [1:0] l5_s;
wire [1:0] l5_c;
wire [5:0] l5_add = {l4_s,cin[24:22]};

ysyx_22051013_csa csa51(.in(l5_add[2:0]), .cout(l5_c[0]), .s(l5_s[0]));
ysyx_22051013_csa csa52(.in(l5_add[5:3]), .cout(l5_c[1]), .s(l5_s[1]));

//---------------------layer6-----------------------------//
wire  l6_s;
wire  l6_c;
wire [2:0] l6_add = {l5_s,cin[25]};

ysyx_22051013_csa csa61(.in(l6_add), .cout(l6_c), .s(l6_s));

//---------------------layer7-----------------------------//
wire  l7_s;
wire  l7_c;
wire [2:0] l7_add = {l6_s,cin[27:26]};

ysyx_22051013_csa csa71(.in(l7_add), .cout(l7_c), .s(l7_s));

//---------------------layer8-----------------------------//
wire [2:0] l8_add = {l7_s,cin[29:28]};

ysyx_22051013_csa csa81(.in(l8_add), .cout(c), .s(s));

//--------------------out---------------------------------//

//assign l_c = {l7_c,l6_c,l5_c,l4_c,l3_c[4]};

assign cout = {l7_c,l6_c,l5_c,l4_c,l3_c,l2_c,l1_c};

endmodule

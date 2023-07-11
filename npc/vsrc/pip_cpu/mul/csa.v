module ysyx_22051013_csa(
	input wire  [2:0] in,
	output wire 	cout,
	output wire	s

);
	wire a,b,cin;
	assign a=in[2];
	assign b=in[1];
	assign cin=in[0];
	assign s = a ^ b ^ cin;
	assign cout = a & b | b & cin | a & cin;
endmodule

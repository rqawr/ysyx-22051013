module ascii(
input [7:0] data,
output reg [7:0] asc);
/* verilator lint_off LATCH */
always@(data)begin 
	case(data)
		8'h15: asc=8'h71;
		8'h1d: asc=8'h77;
		8'h24: asc=8'h65;
		8'h2d: asc=8'h72;
		8'h2c: asc=8'h74;
		8'h35: asc=8'h79;
		8'h3c: asc=8'h75;
	        8'h43: asc=8'h69;
	  	8'h44: asc=8'h6f;
	  	8'h4d: asc=8'h70;
	  	8'h1c: asc=8'h61;
	  	8'h1b: asc=8'h73;
	  	8'h23: asc=8'h64;
		8'h2b: asc=8'h66;
	  	8'h34: asc=8'h67; 
		8'h33: asc=8'h68; 
		8'h3b: asc=8'h6a; 
		8'h42: asc=8'h6b; 
		8'h4b: asc=8'h6c; 
		8'h1a: asc=8'h7a; 
		8'h22: asc=8'h78; 
		8'h21: asc=8'h63; 
		8'h2a: asc=8'h76; 
		8'h32: asc=8'h62; 
		8'h31: asc=8'h6e; 
		8'h3a: asc=8'h6d;
		8'h45: asc=8'h30; 
		8'h16: asc=8'h31; 
		8'h1e: asc=8'h32; 
		8'h26: asc=8'h33; 
		8'h25: asc=8'h34; 
		8'h2e: asc=8'h35; 
		8'h36: asc=8'h36; 
		8'h3d: asc=8'h37; 
		8'h3e: asc=8'h38; 
		8'h46: asc=8'h39;
	        8'hf0: asc=8'hff;	
	        8'h5a: asc=8'h0d;
	 default asc=8'h00;
 endcase
end
endmodule

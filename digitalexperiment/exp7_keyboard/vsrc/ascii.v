module ascii(
input [7:0] data,
output reg [7:0] asc);
/* verilator lint_off LATCH */
always@(data)begin 
	case(data)
		8'h15: asc=8'h51;
		8'h1d: asc=8'h57;
		8'h24: asc=8'h45;
		8'h2d: asc=8'h52;
		8'h2c: asc=8'h54;
		8'h35: asc=8'h59;
		8'h3c: asc=8'h55;
	  8'h43: asc=8'h49;
	  8'h44: asc=8'h4f;
	  8'h4d: asc=8'h50;
	  8'h1c: asc=8'h41;
	  8'h1b: asc=8'h53;
	  8'h23: asc=8'h44;
		8'h2b: asc=8'h46;
	  8'h34: asc=8'h47; 
		8'h33: asc=8'h48; 
		8'h3b: asc=8'h4a; 
		8'h42: asc=8'h4b; 
		8'h4b: asc=8'h4c; 
		8'h1a: asc=8'h5a; 
		8'h22: asc=8'h58; 
		8'h21: asc=8'h43; 
		8'h2a: asc=8'h56; 
		8'h32: asc=8'h42; 
		8'h31: asc=8'h4e; 
		8'h3a: asc=8'h4d;
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
	 default asc=8'hff;
 endcase
end
endmodule

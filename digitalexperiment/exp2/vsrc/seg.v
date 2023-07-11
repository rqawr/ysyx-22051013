module seg(b,h);
 input [3:0]b;
 output reg [6:0]h;
 
always @(*) begin
 if(b[3]==0)
	 h=7'b0000000;
 else begin
	 case(b[2:0])
		 3'd0: h=7'b1000000;
		 3'd1: h=7'b1111001;
		 3'd2: h=7'b0100100;
		 3'd3: h=7'b0110000;
		 3'd4: h=7'b0011001;
		 3'd5: h=7'b0010010;
		 3'd6: h=7'b0000010;
		 3'd7: h=7'b1111000;
		 default h=7'b0000000;
	 endcase
 end
 end
 endmodule

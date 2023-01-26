module control(
	input [2:0] in,
	output reg [2:0] out,
	output reg en);
always@(posedge in[2], posedge in[1], posedge in[0]) begin
	if(in[2]) begin
		en<=~en;
	end
	else begin
		case(in[1:0])
			2'b01: begin out<=out-1; en<=0; end
			2'b10: begin out<=out+1; en<=0; end
		  default: en<=1;
		endcase
	end
end
endmodule



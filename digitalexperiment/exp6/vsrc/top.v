module top(
	input clk,
	output reg [13:0] q_seg,
  output reg [34:0] null_seg,
	output reg  [7:0] q);

	reg [7:0] q_i;

	assign null_seg={35{1'b1}};

	always@(posedge clk) begin
		if(q_i==8'b00000000) begin
			q_i<=8'b00000001; end
		else begin
			q_i[0]<=q_i[1];
			q_i[1]<=q_i[2];
			q_i[2]<=q_i[3];
			q_i[3]<=q_i[4];
			q_i[4]<=q_i[5];
			q_i[5]<=q_i[6];
		  q_i[6]<=q_i[7];
			q_i[7]<=q_i[4]^q_i[3]^q_i[2]^q_i[0];
		end
	end 
		assign q=q_i; 

		seg seg0(
					.b(q_i[3:0]),
							.h(q_seg[6:0]));

		seg seg1(
	   	.b(q_i[7:4]),
			.h(q_seg[13:7]));

endmodule

module top(
	input [3:0] a,
	input [3:0] b,
	input [2:0] button,
	output reg CF,
	output reg ZF,
	output reg SF,
	output reg OF,
	output reg [3:0] result,
  output reg [6:0] oper_seg,
	output reg [20:0] res_seg,
	output reg [27:0] null_seg,
	output en
);
wire [2:0] operitor;
wire [3:0] b_reverse;
wire [7:0] res_num;
wire [3:0] res_sign;
assign b_reverse=(operitor==3'b001)?({4{1'b1}}^b):b;
assign null_seg={28{1'b1}};

always@(a,b,en,operitor) begin
	if(en) begin
		case(operitor)
			3'b000, 3'b001: begin 
			result=b_reverse+{1'b0,operitor};
			{CF,result}=result+a;
			OF=(a[3]==b_reverse[3])&&(result[3]!=a[3]);
			SF=CF==1;
			end
			3'b010: begin result=(~a);{CF,OF,SF}={2'b0,result[3]==1};end
			3'b011: begin result=a&b;{CF,OF,SF}=3'b0;end 
			3'b100: begin result=a|b;{CF,OF,SF}=3'b0;end 
			3'b101: begin result=a^b;{CF,OF,SF}=3'b0;end 
			3'b110: begin result={3'b000,a<b};{CF,OF,SF}=3'b0;end 
			3'b111: begin result={3'b000,a==b};{CF,OF,SF}=3'b0;end 
		endcase
		ZF=result==0;
		
	end
	else begin
		result=0;
		{CF,ZF,SF,OF}=4'b0;
	end
end

wire [3:0] res_abs;
assign res_abs=(SF==1)?(~result+1):result;

assign res_num[3:0]=res_abs%10;
assign res_num[7:4]=res_abs/10;
assign res_sign[3:0]=4'b1011-{3'b000,SF};

	seg seg7(
		.b({1'b0,operitor}),
		.h(oper_seg));

	seg seg0(
		.b(res_num[3:0]),
		.h(res_seg[6:0]));

	seg seg1(
		.b(res_num[7:4]),
		.h(res_seg[13:7]));

	seg seg2(
		.b(res_sign[3:0]),
		.h(res_seg[20:14]));

	control c0(
		.in(button),
		.en(en),
		.out(operitor));
	endmodule

/*
*
	*
	*/
 `include "pip_cpu/define.v"
 module ysyx_22051013_multiply(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				mul_valid	,
	 input wire				flush	,
	 input wire [1:0]	mul_signed	,
	 input wire [`ysyx_22051013_DATA]	mult_op1	,
	 input wire [`ysyx_22051013_DATA]	mult_op2	,
	 output wire				mul_ready	,
	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	result_hi	,
	 output wire [`ysyx_22051013_DATA]	result_lo
	);

	assign mul_ready = flush | ~(|multiplier);
	assign out_valid = flush | ~mul_doing ? 1'b0 : mul_ready;

reg mul_doing;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		mul_doing <= 1'b0;
	end
	else if(mul_valid | ~mul_ready) begin
		mul_doing <= 1'b1;
	end
	else begin
		mul_doing <= 1'b0;
	end
end

wire [63:0] op1_abs;
wire [63:0] op2_abs;
wire op1_sign;
wire op2_sign ;

assign op1_sign = mul_signed[0] ? mult_op1[63] : 1'b0;

assign op2_sign = mul_signed[1] ? mult_op2[63] : 1'b0;

assign op1_abs = op1_sign ? (~mult_op1 + 1) : mult_op1;
assign op2_abs = op2_sign ? (~mult_op2 + 1) : mult_op2;


reg [127:0] multiplicand ;
reg [63:0] multiplier	;

always@(posedge clk)	begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		multiplicand <= 128'd0;
		multiplier <= `ysyx_22051013_ZERO64;
	end
	else if(mul_doing) begin
		multiplicand <= {multiplicand[126:0],1'b0};
		multiplier <= {1'b0,multiplier[63:1]};
	end
	else if(mul_valid) begin
		multiplicand <= {64'd0,op1_abs};
		multiplier <= op2_abs;
	end
	else begin
		multiplicand <= 128'd0;
		multiplier <= `ysyx_22051013_ZERO64;
	end
end

reg [127:0] result_temp;
wire plus_valid;

assign plus_valid = multiplier[0] ? 1'b1 : 1'b0;

always@(posedge clk) begin
	if(rst ==`ysyx_22051013_RSTABLE) begin
		result_temp <= 128'd0;
	end
	else if(mul_doing & plus_valid) begin
		result_temp <= result_temp + multiplicand;
	end
	else if(mul_valid)begin
		result_temp <= 128'd0;
	end
	else begin
		result_temp <= result_temp;
	end
end

reg result_sign;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		result_sign <= 1'b0;
	end
	else if(mul_valid) begin
		result_sign <= op1_sign ^ op2_sign;
	end
	else begin
		result_sign <= result_sign;
	end
end

wire [127:0] final_result = result_sign  ? (~result_temp + 1) : result_temp;
assign result_hi = out_valid ? final_result[127:64] : `ysyx_22051013_ZERO64;
assign result_lo = out_valid ? final_result[63:0] : `ysyx_22051013_ZERO64;

endmodule


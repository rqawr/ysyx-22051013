/*-------------------------------------
* Last modify date : 2023/7/2
* Function : 2-bit booth multiply (32 clk)
---------------------------------------*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/mul/booth1.v"
 module ysyx_22051013_booth_mul(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				mul_valid	,
	 input wire				flush	,
	 input wire [1:0]			mul_signed	,
	 input wire				mulw	,
	 input wire [`ysyx_22051013_DATA]	mult_op1	,
	 input wire [`ysyx_22051013_DATA]	mult_op2	,

	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	result_hi	,
	 output wire [`ysyx_22051013_DATA]	result_lo
);

wire	mul_ready;

	assign mul_ready = flush | ~(|multiplier[66:0]);
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

wire [63:0] op1_temp;
wire [63:0] op2_temp;

assign op1_temp = mulw ? {{32{mult_op1[31]}},mult_op1[31:0]} : mult_op1 ;

assign op2_temp = mulw ? {{32{mult_op2[31]}},mult_op2[31:0]} : mult_op2 ;

wire [65:0] op1_ext;
wire [65:0] op2_ext;

assign op1_ext = mul_signed[0] ? {{2{op1_temp[63]}},op1_temp} : {2'd0,op1_temp} ;
assign op2_ext = mul_signed[1] ? {{2{op2_temp[63]}},op2_temp} : {2'd0,op2_temp} ;

reg [131:0] multiplicand ;
reg [66:0] multiplier	;

always@(posedge clk)	begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		multiplicand <= 132'd0;
		multiplier <= 67'd0;
	end
	else if(mul_doing & ~mul_ready) begin
		multiplicand <= {multiplicand[129:0],2'b0};
		multiplier <= {2'b0,multiplier[66:2]};
	end
	else if(mul_valid) begin
		multiplicand <= {66'd0,op1_ext};
		multiplier <= {op2_ext,1'b0};
	end
	else begin
		multiplicand <= 132'd0;
		multiplier <= 67'd0;
	end
end

wire [2:0] sel;
wire carry;
wire [131:0] multiplicand_mod;

assign sel = multiplier[2:0];

ysyx_22051013_booth1 booth10(
	.mult(multiplicand),
	.sel(sel),
	.part_mul(multiplicand_mod),
	.carry(carry)
);


reg [131:0] result_temp;

always@(posedge clk) begin
	if(rst ==`ysyx_22051013_RSTABLE) begin
		result_temp <= 132'd0;
	end
	else if(mul_doing & ~mul_ready) begin
		result_temp <= result_temp + multiplicand_mod + {131'd0,carry};
	end
	else if(mul_valid)begin
		result_temp <= 132'd0;
	end
	else begin
		result_temp <= result_temp;
	end
end


assign result_hi = out_valid ? result_temp[127:64] : `ysyx_22051013_ZERO64;
assign result_lo = out_valid ? result_temp[63:0] : `ysyx_22051013_ZERO64;

endmodule


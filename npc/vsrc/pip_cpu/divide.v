/*
*
	*
	*/
 `include "pip_cpu/define.v"
 module ysyx_22051013_divide(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				div_valid	,
	 input wire				flush	,
	 input wire				divw	,
	 input wire				div_signed	,
	 input wire [`ysyx_22051013_DATA]	div_op1	,
	 input wire [`ysyx_22051013_DATA]	div_op2	,
	 output wire				div_ready	,
	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	quotient	,
	 output wire [`ysyx_22051013_DATA]	remainder
);

	assign div_ready = flush | (cnt == 7'b0);
	assign out_valid = flush | ~div_doing ? 1'b0 : div_ready;

reg div_doing;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		div_doing <= 1'b0;
	end
	else if(div_valid | ~div_ready) begin
		div_doing <= 1'b1;
	end
	else begin
		div_doing <= 1'b0;
	end
end

wire [63:0] op1_temp;
wire [63:0] op2_temp;

assign op1_temp = divw & ~div_signed ? {32'b0,div_op1[31:0]} : 
		divw & div_signed ? {{32{div_op1[31]}},div_op1[31:0]} :
	  div_op1;

assign op2_temp = divw & ~div_signed ? {32'b0,div_op2[31:0]} : 
		divw & div_signed ? {{32{div_op2[31]}},div_op2[31:0]} :
	  div_op2;

wire op1_sign;
wire op2_sign;

assign op1_sign = div_signed & op1_temp[63];
assign op2_sign = div_signed & op2_temp[63];

wire [63:0] op1_abs;
wire [63:0] op2_abs;

assign op1_abs = op1_sign ? (~op1_temp + 1) : op1_temp;
assign op2_abs = op2_sign ? (~op2_temp + 1) : op2_temp;

reg [127:0] dividend;
wire [64:0] divisor;
reg [6:0] cnt;
reg [63:0] temp_q;

assign divisor = {1'b0, op2_abs};

wire sub_sign ;
wire [63:0]  mod_dividend;

assign {sub_sign, mod_dividend} = dividend[127:63] - divisor;

always@(posedge clk)	begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dividend <= 128'd0;
		temp_q <= `ysyx_22051013_ZERO64	;
		cnt <= 7'b0;
	end
	else if(div_doing & cnt != 7'b0) begin
		if(sub_sign) begin
			dividend <= {dividend[126:0],1'b0};			
		end
		else begin
			dividend <= {mod_dividend,dividend[62:0],sub_sign};
		end
		temp_q <= {temp_q[62:0], ~sub_sign};
		cnt <= cnt - 1'b1;
	end
	else if(div_valid) begin
		dividend <= {64'd0,op1_abs};
		temp_q <= `ysyx_22051013_ZERO64	;
		cnt <= 7'd64;
	end
	else begin
		dividend <= dividend;
		temp_q <= temp_q	;
		cnt <= 7'd0;
	end
end

reg [63:0] mod_quo;
reg [63:0] mod_rem;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mod_quo = `ysyx_22051013_ZERO64	;
		mod_rem = `ysyx_22051013_ZERO64	;
	end
	else if(out_valid) begin 
		if(op1_sign & op2_sign) begin 
			mod_rem = ~dividend[127:64] + 1;
			mod_quo = temp_q;
		end
		else if(op1_sign & ~op2_sign) begin
			mod_rem = ~dividend[127:64] + 1;
			mod_quo = ~temp_q + 1;
		end
		else if(~op1_sign & op2_sign) begin
			mod_rem = dividend[127:64];
			mod_quo = ~temp_q + 1;
		end
		else begin
			mod_rem = dividend[127:64];
			mod_quo = temp_q;
		end
	end
	else begin
		mod_rem = dividend[127:64];
		mod_quo = temp_q;
	end
end

assign quotient = out_valid ? mod_quo : `ysyx_22051013_ZERO64;
assign remainder = out_valid ? mod_rem : `ysyx_22051013_ZERO64;		


endmodule


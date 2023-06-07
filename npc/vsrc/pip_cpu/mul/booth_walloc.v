
`include "pip_cpu/mul/booth.v"
`include "pip_cpu/mul/switch.v"
`include "pip_cpu/mul/walloc.v"
module ysyx_22051013_booth_walloc(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				mul_valid	,
	 input wire				flush	,
	 input wire [1:0]			mul_signed	,
	 input wire				mulw	,
	 input wire [`ysyx_22051013_DATA]	mult_op1	,
	 input wire [`ysyx_22051013_DATA]	mult_op2	,
	 output wire				mul_ready	,
	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	result_hi	,
	 output wire [`ysyx_22051013_DATA]	result_lo
);

assign mul_ready = flush | (cnt == 2'd2);
assign out_valid = flush | ~mul_doing ? 1'b0 : mul_ready;

reg mul_doing;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		mul_doing <= 1'b0;
	end
	else if(mul_valid) begin
		mul_doing <= 1'b1;
	end
	else if(mul_ready)begin
		mul_doing <= 1'b0;
	end
	else begin
		mul_doing <= mul_doing;
	end
end

reg [1:0] cnt;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		cnt <= 2'b00;
	end
	else if(mul_valid) begin
		cnt <= 2'b01;
	end
	else if(mul_doing)begin
		cnt <= cnt + 1;
	end
	else begin 
		cnt <= cnt;
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

wire [131:0] multiplicand ;
wire [66:0] multiplier	;

assign multiplicand = {66'd0,op1_ext};
assign 	multiplier = {op2_ext,1'b0};

wire [4355:0] part_mul;
wire [32:0] part_carry;
wire [4355:0] walloc_i;

//stage 1
ysyx_22051013_booth booth0(
	.multiplicand(multiplicand),
	.multiplier(multiplier),
	.part_mul(part_mul),
	.part_carry(part_carry)
);

ysyx_22051013_switch switch1(
	.p(part_mul),
	.o(walloc_i)
);

//reg 1-2
reg [31:0] part_c;
reg [4355:0] part_add;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE | flush) begin 
		part_add <= 4356'd0;
		part_c <= 32'd0;
	end
	else begin 
		part_add <= walloc_i;
		part_c <= part_carry[31:0];
	end
end


//stage 2 -- reg 2-3 -- stage 3
wire [131:0] add_op1;
wire [131:0] add_op2;
wire walloc_c1;
wire walloc_c2;

ysyx_22051013_walloc walloc2(
	.clk(clk),
	.rst(rst),
	.flush(flush),
	.part_add(part_add),
	.part_c(part_c),
	.op2_1(walloc_c1),
	.addr_cin(walloc_c2),
	.re_op1(add_op1),
	.re_op2(add_op2)
);

//reg 3-4
reg [131:0] addr_op1;
reg [131:0] addr_op2;
reg addr_op2_1;
reg addr_cin;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE | flush) begin 
		addr_op1 <= 132'd0;
		addr_op2 <= 132'd0;
		addr_cin <= 1'b0;
		addr_op2_1 <= 1'b0;
	end
	else begin 
		addr_op1 <= add_op1;
		addr_op2 <= add_op2;
		addr_cin <= walloc_c2;
		addr_op2_1 <= walloc_c1;
	end
end
//stage 4
wire [131:0] final_op2;
wire [131:0] result_temp;
assign final_op2 = {addr_op2[130:0],addr_op2_1}; 
assign result_temp = addr_op1 + final_op2 + {131'd0,addr_cin};

assign result_hi = out_valid ? result_temp[127:64] : 64'd0;
assign result_lo = out_valid ? result_temp[63:0] : 64'd0;


wire unused_ok = &{result_temp[131:128],addr_op2[131],part_carry[32]};

endmodule


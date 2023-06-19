/*-------
* Last modify date : 2022/2/16
* Function : execute support more instructs 
*/
 
 `include "pip_cpu/define.v"
 `include "pip_cpu/mul/booth_mul.v"
 `include "pip_cpu/divide.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_exu(
	input	wire				clk	,
	input	wire				rst	,
	input	wire	[`ysyx_22051013_DATA]	reg_op1	,
	input	wire	[`ysyx_22051013_DATA]	reg_op2	,
	input	wire	[1:0]			op1_sel	,
	input	wire	[2:0]			op2_sel	,
	input	wire	[`ysyx_22051013_REGADDR]	rd_addr	,
	input	wire	[`ysyx_22051013_REGADDR]	rs1_addr,
	input	wire	[`ysyx_22051013_IMM]	imm	,
	input	wire	[`ysyx_22051013_PC]	pc_i	,
	input	wire	[7:0]			alu_sel	,
	
	
	input 	wire			 	ls_ready,
	input 	wire			 	id_valid,
	output	wire			 	ex_valid,
	output	wire			 	ex_ready,
	
	output	wire	[`ysyx_22051013_REG]	store_data 	,
	output	wire	[11:0]			csr_addr,
	output	wire	[6:0]			csr_ctl	,
	output	wire	[`ysyx_22051013_DATA]	exu_res
);

//hzd_ctl
assign ex_valid = id_valid | mul_stall | div_stall;
assign ex_ready = ls_ready | mul_stall | div_stall; 

//alu

wire [`ysyx_22051013_DATA] op1;
wire [`ysyx_22051013_DATA] op2;

assign op1 = 	(op1_sel == 2'b01) ? reg_op1 : 
		(op1_sel == 2'b10) ? pc_i : 
		`ysyx_22051013_ZERO64;
		
assign op2 = 	(op2_sel == 3'b001) ? reg_op2 : 
		(op2_sel == 3'b010) ? `ysyx_22051013_PLUS4 : 
		(op2_sel == 3'b100) ? imm :
		`ysyx_22051013_ZERO64;


// addxx
wire     [`ysyx_22051013_DATA]  op1_add_op2   = op1 + op2 ;
wire     [`ysyx_22051013_DATA]  op1_addw_op2  = {{32{op1_add_op2[31]}},op1_add_op2[31:0]} ;

// sub subw
wire     [`ysyx_22051013_DATA]  op1_sub_op2	 = op1 - op2; 
wire     [`ysyx_22051013_DATA]  op1_subw_op2     = {{32{op1_sub_op2[31]}},op1_sub_op2[31:0]} ;

//slt slti sltiu sltu
wire     op1_lt_op2 = (op1[63] && ~op2[63]) || (~op1[63] && ~op2[63] && op1_sub_op2[63]) || (op1[63] && op2[63] && op1_sub_op2[63]) ;

//sra srai
wire	 [`ysyx_22051013_DATA] op1_sra_op2 = $signed(op1) >>> op2[5:0] ;

//sllw slliw
wire     [31:0]     sllw  = op1[31:0] << op2[4:0]          ;
wire     [`ysyx_22051013_DATA] op1_sllw_op2 = {{32{sllw[31]}} , sllw} ;

//srlw srliw 
wire     [31:0]     srlw  = op1[31:0] >> op2[4:0]          ;
wire     [`ysyx_22051013_DATA] op1_srlw_op2 = {{32{srlw[31]}} , srlw} ;

//sraiw sraw
wire	 [31:0]     sraw = $signed(op1[31:0]) >>> op2[4:0] ;
wire	 [`ysyx_22051013_DATA] op1_sraw_op2 = {{32{sraw[31]}} , sraw} ;

reg [`ysyx_22051013_DATA] alu_res ;


always@(*)begin
  if(rst == `ysyx_22051013_RSTABLE) begin
    alu_res = `ysyx_22051013_ZERO64;
  end
  else begin
    case(alu_sel)
          `INST_ADDI ,  `INST_ADD,
          `INST_LUI  ,  `INST_AUIPC, 
          `INST_JAL  ,  `INST_JALR,
          `INST_LB   ,  `INST_LH,
          `INST_LW   ,  `INST_LD,
          `INST_SB   ,  `INST_SH,
          `INST_SW   ,  `INST_SD,
          `INST_LBU  ,  `INST_LHU,  
          `INST_LWU			:  begin alu_res = op1_add_op2   	    ;end
          `INST_ADDW ,  `INST_ADDIW	:  begin alu_res = op1_addw_op2             ;end

          `INST_SUB                	:  begin alu_res = op1_sub_op2              ;end
          `INST_SUBW               	:  begin alu_res = op1_subw_op2             ;end
          
          `INST_SLTI ,  `INST_SLT  	:  begin alu_res = {63'd0 , op1_lt_op2}     ;end
          `INST_SLTIU , `INST_SLTU 	:  begin alu_res = {63'd0 , (op1 < op2)}    ;end
          `INST_SRAI ,  `INST_SRA  	:  begin alu_res = op1_sra_op2              ;end
          `INST_SLLIW,  `INST_SLLW 	:  begin alu_res = op1_sllw_op2             ;end
          `INST_SRLIW,  `INST_SRLW 	:  begin alu_res = op1_srlw_op2             ;end
          `INST_SRAIW,  `INST_SRAW 	:  begin alu_res = op1_sraw_op2             ;end
          `INST_XORI ,  `INST_XOR  	:  begin alu_res = op1 ^ op2                ;end
          `INST_ORI  ,  `INST_OR   	:  begin alu_res = op1 | op2                ;end
          `INST_ANDI ,  `INST_AND  	:  begin alu_res = op1 & op2                ;end
          `INST_SLLI ,  `INST_SLL  	:  begin alu_res = op1 << op2 [5:0]         ;end
          `INST_SRLI ,  `INST_SRL  	:  begin alu_res = op1 >> op2 [5:0]         ;end
	  `INST_EBREAK             	:  begin alu_res = op1                      ;end
	  
          default 		   	:  begin alu_res = `ysyx_22051013_ZERO64; end
    endcase
  end
end

//mult
reg mul;
reg [1:0] mul_signed;
reg mulw;

always@(*) begin
	case(alu_sel) 
		`INST_MUL	: begin	mul = 1'b1; mul_signed = 2'b11; mulw = 1'b0; end
		`INST_MULH	: begin	mul = 1'b1; mul_signed = 2'b11; mulw = 1'b0; end
		`INST_MULHU	: begin	mul = 1'b1; mul_signed = 2'b00; mulw = 1'b0; end
		`INST_MULHSU	: begin mul = 1'b1; mul_signed = 2'b10; mulw = 1'b0; end
		`INST_MULW	: begin mul = 1'b1; mul_signed = 2'b11; mulw = 1'b1; end
		default 	: begin mul = 1'b0; mul_signed = 2'b00; mulw = 1'b0; end
	endcase
end

reg delay1;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay1 <= 1'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		delay1 <= 1'b0;
	end
	else if(mul) begin
		delay1 <= 1'b1;
	end
	else begin
		delay1 <= 1'b0;
	end
end

wire mul_valid;

assign mul_valid = mul & ~delay1;

wire mul_out_valid;
wire mul_ready;

wire [`ysyx_22051013_DATA] result_hi;
wire [`ysyx_22051013_DATA] result_lo;

wire flush = 1'b0;

ysyx_22051013_booth_mul booth_mul0(
		.clk(clk),
		.rst(rst),
		.mul_valid(mul_valid),
		.flush(flush),
		.mul_signed(mul_signed),
		.mulw(mulw),
		.mult_op1(op1),
		.mult_op2(op2),
		.mul_ready(mul_ready),
		.out_valid(mul_out_valid),
		.result_hi(result_hi),
		.result_lo(result_lo)
);

reg [`ysyx_22051013_DATA] mul_res;
always@(*) begin
	if(mul_out_valid) begin
		case(alu_sel)
			`INST_MUL : begin
				mul_res = result_lo;
			end
			`INST_MULH, `INST_MULHU, `INST_MULHSU : begin
				mul_res = result_hi;
			end
			`INST_MULW : begin
				mul_res = {{32{result_lo[31]}},result_lo[31:0]};
			end
			default : begin mul_res = `ysyx_22051013_ZERO64; end
		endcase
	end
	else begin
		mul_res = `ysyx_22051013_ZERO64;
	end
end

reg [`ysyx_22051013_DATA] mul_res_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul_res_temp <= 64'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		mul_res_temp <= 64'b0;
	end
	else if(mul_out_valid) begin
		mul_res_temp <= mul_res;
	end
	else begin
		mul_res_temp <= mul_res_temp;
	end
end


//div
reg div;
reg div_signed;
reg divw;

always@(*) begin
	case(alu_sel) 
		`INST_DIV	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b0; end
		`INST_DIVU	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b0; end
		`INST_DIVW	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b1; end
		`INST_DIVUW	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b1; end
		`INST_REM	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b0; end
		`INST_REMU	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b0; end
		`INST_REMW	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b1; end
		`INST_REMUW	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b1; end
		default		: begin div = 1'b0; div_signed = 1'b0; divw = 1'b0; end
	endcase
end

reg delay2;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay2 <= 1'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		delay2 <= 1'b0;
	end
	else if(div) begin
		delay2 <= 1'b1;
	end
	else begin
		delay2 <= 1'b0;
	end
end

wire div_valid;
assign div_valid = div & ~delay2;

wire div_out_valid;
wire div_ready;

wire [`ysyx_22051013_DATA] quotient;
wire [`ysyx_22051013_DATA] remainder;

ysyx_22051013_divide divide1(
		.clk(clk),
		.rst(rst),
		.div_valid(div_valid),
		.flush(flush),
		.div_signed(div_signed),
		.divw(divw),
		.div_op1(op1),
		.div_op2(op2),
		.div_ready(div_ready),
		.out_valid(div_out_valid),
		.quotient(quotient),
		.remainder(remainder)
);

reg [`ysyx_22051013_DATA] div_res;
always@(*) begin
	if(div_out_valid) begin
		case(alu_sel)
			`INST_DIV, `INST_DIVU, `INST_DIVW, `INST_DIVUW : begin
				div_res = quotient;
			end
			
			`INST_REM, `INST_REMU, `INST_REMW, `INST_REMUW  : begin
				div_res = remainder;
			end
			
			default : begin div_res = `ysyx_22051013_ZERO64; end
		endcase
	end
	else begin
		div_res = `ysyx_22051013_ZERO64;
	end
end

reg [`ysyx_22051013_DATA] div_res_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div_res_temp <= 64'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		div_res_temp <= 64'b0;
	end
	else if(div_out_valid) begin
		div_res_temp <= div_res;
	end
	else begin
		div_res_temp <= div_res_temp;
	end
end



//stall_logic
reg mul_reg;


always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul_reg <= 1'b0;
	end
	else if(mul & mul_out_valid) begin
		mul_reg <= 1'b1;
	end
	else if(~(ex_valid | ex_ready)) begin
		mul_reg <= 1'b0;
	end
	else begin
		mul_reg <= mul_reg;
	end
end

wire mul_stall;
assign mul_stall = mul & ~mul_reg;

reg div_reg;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div_reg <= 1'b0;
	end
	else if(div & div_out_valid) begin
		div_reg <= 1'b1;
	end
	else if(~(ex_valid | ex_ready)) begin
		div_reg <= 1'b0;
	end
	else begin
		div_reg <= div_reg;
	end
end

wire div_stall;
assign div_stall = div & ~div_reg;

//out to lsu		     
assign store_data = reg_op2 ;


//csr
reg csr_wr_ena;
reg csr_rd_ena;
reg mret_ena;
reg ecall_ena;
reg csrrw_ena;
reg csrrs_ena;
reg csrrc_ena;

wire [`ysyx_22051013_DATA] csr_op = {{59{1'b0}},rs1_addr};

assign csr_addr = (csr_ctl[3:0] != 4'd0) ? imm[11:0] : 12'd0;

wire csrrxi_ena = (alu_sel == `INST_CSRRWI) | (alu_sel == `INST_CSRRSI) | (alu_sel == `INST_CSRRCI) ;

always @(*) begin
  	csr_wr_ena = 1'b0;
	csr_rd_ena = 1'b0;
	mret_ena =  1'b0;
	ecall_ena = 1'b0;
	csrrw_ena = 1'b0;
	csrrs_ena = 1'b0;
	csrrc_ena = 1'b0;
  case(alu_sel)
  	`INST_ECALL : begin ecall_ena = 1'b1; end
				
	`INST_CSRRW, `INST_CSRRWI :  begin 	csr_wr_ena = `ysyx_22051013_WENABLE; 
						csr_rd_ena = (rd_addr == 5'd0) ? `ysyx_22051013_RDISABLE : `ysyx_22051013_RENABLE;
						csrrw_ena = 1'b1;
				 	end
		 
	`INST_CSRRS, `INST_CSRRSI :  begin	csr_wr_ena = (rs1_addr == 5'd0) ? `ysyx_22051013_WDISABLE : `ysyx_22051013_WENABLE; 
						csr_rd_ena = `ysyx_22051013_RENABLE;
						csrrs_ena = 1'b1;					
					end
	
	`INST_CSRRC, `INST_CSRRCI :  begin	csr_wr_ena = (rs1_addr == 5'd0) ? `ysyx_22051013_WDISABLE : `ysyx_22051013_WENABLE; 
						csr_rd_ena = `ysyx_22051013_RENABLE;
						csrrc_ena = 1'b1;
					end
	
	`INST_MRET :  begin  mret_ena = 1'b1 ;end
	
	default : begin	
		csr_wr_ena = 1'b0;
		csr_rd_ena = 1'b0;
		mret_ena =  1'b0;
		ecall_ena = 1'b0;
		csrrw_ena = 1'b0;
		csrrs_ena = 1'b0;
		csrrc_ena = 1'b0;
	end
  endcase 
end

assign csr_ctl = {csrrw_ena, csrrs_ena, csrrc_ena, csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena};


//out to wbu
wire muldiv_ena;
wire [`ysyx_22051013_DATA] muldiv_res;
assign muldiv_ena = mul | div;
assign muldiv_res = 	mul ? mul_res_temp :
			div ? div_res_temp :
			`ysyx_22051013_ZERO64;

assign exu_res = 	csrrxi_ena ? csr_op :
			(csr_ctl[3:0] != 4'd0) ? reg_op1 :
			muldiv_ena ? muldiv_res :
			alu_res ;

endmodule

/*-------
* Last modify date : 2022/2/16
* Function : execute support more instructs 
*/
 
 `include "pip_cpu/define.v"
 `include "pip_cpu/csr.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_exu(
	input wire          clk,
	input wire          rst,
	input wire [`ysyx_22051013_DATA] op1,
	input wire [`ysyx_22051013_DATA] op2,
	input wire [`ysyx_22051013_IMM] imm ,
	input wire [`ysyx_22051013_PC]	pc_i	,
	input wire [ 7:0]     alu_sel   ,
	input wire [3:0]      csr_ctl  ,
	
	input  wire			 ls_ready,
	input  wire			 id_valid,
	output wire			 ex_valid,
	output wire			 ex_ready,
	output wire			 ex_flush,
	
	output wire [`ysyx_22051013_REG] store_data ,
	output wire			 ex_jump_ena,
	output wire [`ysyx_22051013_PC]  ex_jump_pc,
	output reg [`ysyx_22051013_DATA] exu_res
);

//hzd_ctl
assign ex_valid = id_valid;
assign ex_ready = ls_ready ; 
assign ex_flush = ex_jump_ena;

// addxx
wire     [`ysyx_22051013_DATA]  op1_add_op2   = op1 + op2 ;
wire     [`ysyx_22051013_DATA]  op1_addw_op2  = {{32{op1_add_op2[31]}},op1_add_op2[31:0]} ;

// sub subw
wire     [`ysyx_22051013_DATA]  op1_sub_op2	 = $signed(op1) - $signed(op2) ; 
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

// mul mulh[[s]u] 
wire     [127:0]     mul  = op1 * op2  ;
wire     [`ysyx_22051013_DATA]   op1_mul_op2      = mul[63:0]  ;
wire     [`ysyx_22051013_DATA]   op1_mulh_op2     = mul[127:64]  ;
wire     [`ysyx_22051013_DATA]   op1_mulw_op2     = {{32{mul[31]}},mul[31:0]}    ;

//divxx
wire     [`ysyx_22051013_DATA]   div = op1 / op2 ;
wire     [31:0]     		divw  = $signed(op1[31:0]) / $signed(op2[31:0])   ;
wire     [`ysyx_22051013_DATA]  op1_divw_op2       = {{32{divw[31]}},divw}    ;
wire     [`ysyx_22051013_DATA]  op1_divuw_op2      = {{32{div[31]}},div[31:0]}    ;

//remxx
wire     [`ysyx_22051013_DATA]   rem = op1 % op2 ;
wire     [31:0]     		remw  = $signed(op1[31:0]) % $signed(op2[31:0])   ;
wire     [`ysyx_22051013_DATA]  op1_remw_op2       = {{32{remw[31]}},remw}    ;
wire     [`ysyx_22051013_DATA]  op1_remuw_op2      = {{32{rem[31]}},rem[31:0]}    ;

reg [`ysyx_22051013_DATA] alu_res ;


always@(*)begin
  if(rst == `ysyx_22051013_RSTABLE) begin
    alu_res = `ysyx_22051013_ZERO64;
  end
  else begin
    case(alu_sel)
          `INST_ADDI ,  `INST_ADD,
          `INST_LUI  ,  `INST_AUIPC:  begin alu_res = op1_add_op2   	       ;end
          `INST_ADDW ,  `INST_ADDIW:  begin alu_res = op1_addw_op2             ;end
          
          `INST_LB   ,  `INST_LH,
          `INST_LW   ,  `INST_LD,
          `INST_SB   ,  `INST_SH,
          `INST_SW   ,  `INST_SD,
          `INST_LBU  ,  `INST_LHU,  
          `INST_LWU		   :  begin alu_res = op1 + imm   	       ;end
          `INST_SUB                :  begin alu_res = op1_sub_op2              ;end
          `INST_SUBW               :  begin alu_res = op1_subw_op2             ;end
          
          `INST_SLTI ,  `INST_SLT  :  begin alu_res = {63'd0 , op1_lt_op2}     ;end
          `INST_SLTIU , `INST_SLTU :  begin alu_res = {63'd0 , (op1 < op2)}    ;end
          `INST_SRAI ,  `INST_SRA  :  begin alu_res = op1_sra_op2              ;end
          `INST_SLLIW,  `INST_SLLW :  begin alu_res = op1_sllw_op2             ;end
          `INST_SRLIW,  `INST_SRLW :  begin alu_res = op1_srlw_op2             ;end
          `INST_SRAIW,  `INST_SRAW :  begin alu_res = op1_sraw_op2             ;end
          `INST_XORI ,  `INST_XOR  :  begin alu_res = op1 ^ op2                ;end
          `INST_ORI  ,  `INST_OR   :  begin alu_res = op1 | op2                ;end
          `INST_ANDI ,  `INST_AND  :  begin alu_res = op1 & op2                ;end
          `INST_SLLI ,  `INST_SLL  :  begin alu_res = op1 << op2 [5:0]         ;end
          `INST_SRLI ,  `INST_SRL  :  begin alu_res = op1 >> op2 [5:0]         ;end
          `INST_JAL  ,  `INST_JALR :  begin alu_res = pc_i + 64'd4             ;end
	  `INST_EBREAK             :  begin alu_res = op1                      ;end
	  
	  `INST_MUL                :  begin alu_res = op1_mul_op2              ;end 
          `INST_MULH               :  begin alu_res = op1_mulh_op2             ;end 
	  `INST_MULW               :  begin alu_res = op1_mulw_op2             ;end 
	  
	  `INST_DIV , `INST_DIVU   :  begin alu_res = div	               ;end 
	  `INST_DIVW		   :  begin alu_res = op1_divw_op2 	       ;end 
	  `INST_DIVUW		   :  begin alu_res = op1_divuw_op2	       ;end 
	  
	  `INST_REM , `INST_REMU   :  begin alu_res = rem	               ;end 
	  `INST_REMW		   :  begin alu_res = op1_remw_op2 	       ;end 
	  `INST_REMUW		   :  begin alu_res = op1_remuw_op2	       ;end 
	  
          default 		   :  begin alu_res = `ysyx_22051013_ZERO64; end
    endcase
  end
end

//out to lsu		     
assign store_data = op2 ;


//csr
wire [11:0]  csr_addr = (csr_ctl != 4'd0) ? imm[11:0] : 12'd0;
wire  [`ysyx_22051013_DATA]    read_csr_data  ;
reg   [`ysyx_22051013_DATA]    write_csr_data  ;
reg   [`ysyx_22051013_REG]    mcause_value  ;

wire [`ysyx_22051013_DATA] set_data     = read_csr_data | op1 ;
wire [`ysyx_22051013_DATA] clear_data   = read_csr_data & (~op1) ;

always @(*) begin
  write_csr_data = `ysyx_22051013_ZERO64;
  mcause_value = `ysyx_22051013_ZERO64;
  case(alu_sel)
  	`INST_ECALL : begin  write_csr_data = pc_i; mcause_value = 64'd11;end
				
	`INST_CSRRW, `INST_CSRRWI :  begin write_csr_data = op1        ;end
		 
	`INST_CSRRS, `INST_CSRRSI :  begin write_csr_data = set_data   ;end
	
	`INST_CSRRC, `INST_CSRRCI :  begin write_csr_data = clear_data;	end
	default : begin	
           write_csr_data = `ysyx_22051013_ZERO64;
           mcause_value = `ysyx_22051013_ZERO64;
	end
  endcase 
end

 ysyx_22051013_csr csr_operate(
	.clk(clk)	,
	.rst(rst)	,
	.csr_ctl(csr_ctl)	,
	.csr_addr(csr_addr)	,
	.mcause_value(mcause_value),
	.read_csr_data(read_csr_data),
	.write_csr_data(write_csr_data)
);

assign ex_jump_ena = rst == `ysyx_22051013_RSTABLE ? 1'b0 : csr_ctl[1] | csr_ctl[0];
assign ex_jump_pc = rst == `ysyx_22051013_RSTABLE ? `ysyx_22051013_ZERO64 : read_csr_data;

//out to wbu
assign exu_res = (csr_ctl != 4'd0) ? read_csr_data : alu_res ;

endmodule

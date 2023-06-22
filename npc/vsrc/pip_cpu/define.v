// system 
	`define ysyx_22051013_RSTABLE		1'b1
	`define ysyx_22051013_READY			1'b0
	`define ysyx_22051013_NOTREADY	1'b1
	`define ysyx_22051013_VALID			1'b0
	`define ysyx_22051013_NOTVALID	1'b1

// ifu
	`define ysyx_22051013_PC			63:0
	`define ysyx_22051013_ZERO64	64'h0000000000000000
	`define ysyx_22051013_STARTPC 64'h0000000080000000
	`define ysyx_22051013_PLUS4		64'h0000000000000004

//regfile
  `define ysyx_22051013_REGADDR		4:0
	`define ysyx_22051013_REG				63:0
	`define ysyx_22051013_WENABLE		1'b1
	`define ysyx_22051013_WDISABLE	1'b0
	`define ysyx_22051013_RENABLE		1'b1
	`define ysyx_22051013_RDISABLE	1'b0

//idu
  `define ysyx_22051013_INST			31:0
  `define ysyx_22051013_DATA			63:0
  `define ysyx_22051013_IMM				63:0
  `define ysyx_22051013_SYSTEM		5'b11100
  `define ysyx_22051013_OPIMM			5'b00100
  `define ysyx_22051013_OP				5'b01100
  `define ysyx_22051013_OPIMM32   5'b00110
  `define ysyx_22051013_OP32      5'b01110
  `define ysyx_22051013_LUI       5'b01101
  `define ysyx_22051013_AUIPC     5'b00101
  `define ysyx_22051013_JAL       5'b11011
  `define ysyx_22051013_JALR      5'b11001
  `define ysyx_22051013_BRANCH    5'b11000
  `define ysyx_22051013_LOAD      5'b00000
  `define ysyx_22051013_STORE     5'b01000
  
//exu
  `define ysyx_22051013_BRANCHABLE		1'b1
  `define ysyx_22051013_BRANCHDISABLE 1'b0

//lsu
  `define ysyx_22051013_DATAADDR 63:0

//inst
	`define EBREAK_TRAP        32'b00000000000100000000000001110011
	`define INST_ADDI          8'b00000001
	`define INST_SLTI          8'b00000010
	`define INST_SLTIU         8'b00000100
	`define INST_XORI          8'b00001000
	`define INST_ORI           8'b00010000
	`define INST_ANDI          8'b00100000
	`define INST_SLLI          8'b01000000
	`define INST_SRLI          8'b10000000
	`define INST_SRAI          8'b00000011
	`define INST_ADD           8'b00000110
	`define INST_SUB           8'b00001100
	`define INST_SLL           8'b00011000
	`define INST_SLT           8'b00110000
	`define INST_SLTU          8'b01100000
	`define INST_XOR           8'b11000000
	`define INST_SRL           8'b00000101
	`define INST_SRA           8'b00001010
	`define INST_OR            8'b00010100
	`define INST_AND           8'b00101000
	`define INST_LUI           8'b01010000
	`define INST_AUIPC         8'b10100000
	`define INST_ADDIW         8'b00001001
	`define INST_SLLIW         8'b00010010
	`define INST_SRLIW         8'b00100100
	`define INST_SRAIW         8'b01001000
	`define INST_ADDW          8'b10010000
	`define INST_SUBW          8'b00010001
	`define INST_SLLW          8'b00100010
	`define INST_SRLW          8'b01000100
	`define INST_SRAW          8'b10001000

	`define INST_JAL           8'b00100001
	`define INST_JALR          8'b01000010
	`define INST_EBREAK        8'b10000100
	
	`define INST_SB            8'b01000001
	`define INST_SH            8'b10000010
	`define INST_SW            8'b10000001
	`define INST_SD            8'b00000111
	
	`define INST_BEQ           8'b00001110
	`define INST_BNE           8'b00011100
	`define INST_BLT           8'b00111000
	`define INST_BGE           8'b01110000
	`define INST_BLTU          8'b11100000
	`define INST_BGEU          8'b00001101
	
	`define INST_LB            8'b00011010
	`define INST_LH            8'b00110100
	`define INST_LW            8'b01101000
	`define INST_LD            8'b11010000
	`define INST_LBU           8'b00001011
	`define INST_LHU           8'b00010110
	`define INST_LWU           8'b00101100

	`define INST_MUL           8'b01011000
	`define INST_MULH          8'b10110000
	`define INST_MULHSU        8'b00010011
	`define INST_MULHU         8'b00100110
	`define INST_MULW          8'b01001100

	`define INST_DIV           8'b10011000
	`define INST_DIVU          8'b00100011
	`define INST_DIVUW         8'b01000110
	`define INST_DIVW          8'b10001100

	`define INST_REM           8'b01000011
	`define INST_REMU          8'b10000110
	`define INST_REMUW         8'b10000011
	`define INST_REMW          8'b00010101
	
	`define INST_ECALL         8'b00101010
	`define INST_MRET          8'b01010100
	`define INST_CSRRW         8'b10101000
	`define INST_CSRRS         8'b00100101
	`define INST_CSRRC         8'b01001010
	`define INST_CSRRWI        8'b10010100
	`define INST_CSRRSI        8'b11001000
	`define INST_CSRRCI        8'b10100100
	`define INST_FENCEI        8'b11000001

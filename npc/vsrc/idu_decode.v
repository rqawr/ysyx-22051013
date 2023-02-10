/*---------
* Last modify date : 2022/2/8
* Function : decode inst to control signal
*/

 `include "define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_idu_decode(
	input wire                 rst  ,
	input wire [`ysyx_22051013_INST]	inst	,
  
	output wire											rs1_ena	,
	output wire											rs2_ena	,
	output wire											jump	,
	output reg [`ysyx_22051013_IMM] 			ext_imm,
	output wire					imm_ena	,

	output wire	[6:0]								alu_ctl	
);

wire [6:0] opcode ;
wire [2:0] funct3	;
//wire [6:0] funct7;

wire [11:0] i_imm ;
wire [20:1] j_imm ;
wire [19:0] u_imm ;


assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign i_imm = inst[31:20];
assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst[31:12];
assign u_imm = inst[31:12];




wire inst_addi = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b0010011) && (funct3 == 3'b000) ;
wire inst_auipc = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b0010111) ;
wire inst_lui = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b0110111) ;
wire inst_jal = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b1101111) ;
wire inst_jalr = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b1100111) ;

wire inst_sd = (rst != `ysyx_22051013_RSTABLE) && (opcode == 7'b0100011) && (funct3 == 3'b011) ;

wire inst_ebreak = (rst != `ysyx_22051013_RSTABLE) &&(opcode == 7'b1110011) && (funct3 == 3'b000) && (i_imm == 12'd1);

assign alu_ctl[0] = inst_addi;
assign alu_ctl[1] = inst_auipc;
assign alu_ctl[2] = inst_lui;
assign alu_ctl[3] = inst_jal;
assign alu_ctl[4] = inst_jalr;
assign alu_ctl[5] = inst_sd;
assign alu_ctl[6] = inst_ebreak;




assign rs1_ena = inst_addi | inst_jalr ;
assign rs2_ena = 1'b0;
assign jump = inst_jal | inst_jalr ;

always @(*) begin
  if(inst_addi| inst_jalr) begin ext_imm = {{52{i_imm[11]}},i_imm}; end
  else if (inst_lui | inst_auipc)                            begin ext_imm = {{32{u_imm[19]}},u_imm<<12,{12{1'b0}}}; end
  else if (inst_jal)                                         begin ext_imm = {{44{j_imm[20]}},j_imm[20:1]<<1}; end
  else                                                       begin ext_imm = `ysyx_22051013_ZERO64; end
end  

assign imm_ena = inst_addi| inst_jalr | inst_lui | inst_auipc | inst_jal ;


import "DPI-C" function void ebreak (input bit ebreak_ena);
 
always@(*) begin
  ebreak(inst_ebreak);
  end

wire _unused_ok = &{inst[11:7]};
endmodule

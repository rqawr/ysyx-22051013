/*------
Last modify date : 2022/2/9
Fucntion : decode dummy
*/

  `include "define.v" 
  `include "idu_decode.v"
  /* verilator lint_off DECLFILENAME */
module ysyx_22051013_idu(
	//system input
	input	  wire		       		rst	,
	input     wire                          clk     ,
	
	//ifu input
	input	  wire [`ysyx_22051013_INST]	inst_i	,
	input	  wire [`ysyx_22051013_PC]	pc_i	,
	
	//regfile signal
	output     wire [`ysyx_22051013_REGADDR] rs1_addr ,
	output     wire				              		 rs1_ena  ,
	input      wire [`ysyx_22051013_REG]     rs1_data ,
	
	output     wire [`ysyx_22051013_REGADDR] rs2_addr ,
	output     wire							 rs2_ena  ,
	input      wire [`ysyx_22051013_REG]     rs2_data ,
	
	output     wire				 rd_ena  ,
  	output     wire [`ysyx_22051013_REGADDR] rd_addr ,
        
	//control out signal
	output    wire [6:0]         		alusrc_o  ,
	output    wire            jump_o     ,
	
	//id out signal
	output    reg [`ysyx_22051013_DATA]  	op1 ,
	output    reg [`ysyx_22051013_DATA]  	op2 , 
	output	  wire [`ysyx_22051013_PC]	pc_o	
);


wire   [ 4:0]   rd     ;
wire   [ 4:0]   rs1    ;
wire   [ 4:0]   rs2    ;
assign  rd       =  inst_i [11:7]   ;
assign  rs1      =  inst_i [19:15]  ;
assign  rs2      =  inst_i [24:20]  ;

wire [`ysyx_22051013_IMM] imm ;
wire imm_ena ;

ysyx_22051013_idu_decode decode(
	.rst(rst)	,
	.inst(inst_i),
	.rs1_ena(rs1_ena),
	.rs2_ena(rs2_ena),
	.ext_imm(imm)	,
	.imm_ena(imm_ena),
	.jump(jump_o)	,
	.alu_ctl(alusrc_o)
);

//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;

//out to exu
always @(*) begin
  if(rst == `ysyx_22051013_RSTABLE) begin  op1 = `ysyx_22051013_ZERO64   ;   end
  else if(rs1_ena) begin op1 = rs1_data ; end
  else if (alusrc_o == 7'b0000010 | alusrc_o == 7'b0000100) begin  op1 = pc_i ;  end
  else begin op1 = `ysyx_22051013_ZERO64; end
  end
  
always @(*) begin
   if(rst == `ysyx_22051013_RSTABLE) begin  op2 = `ysyx_22051013_ZERO64   ;   end
  else if(rs2_ena) begin op2 = rs2_data ; end
  else if(imm_ena) begin op2 = imm ; end
  else begin op2 = `ysyx_22051013_ZERO64; end
 end


 
assign pc_o = rst == `ysyx_22051013_RSTABLE ? `ysyx_22051013_ZERO64 : pc_i	;


import "DPI-C" function void if_id_thepc(input longint thepc_data, input bit[31:0] the_inst);

  always @(posedge clk) begin
   if(rst != `ysyx_22051013_RSTABLE)
     if_id_thepc(pc_i, inst_i);
  end



endmodule

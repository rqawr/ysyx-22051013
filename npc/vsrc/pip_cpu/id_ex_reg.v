/*-------
*
*
*/
 `include "pip_cpu/define.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_reg_idex(
    input     wire                                     clk                ,
    input     wire                                     rst                ,
		input     wire                                     idex_flush         ,
		input     wire                                     idex_stall         ,

    input     wire       [`ysyx_22051013_INST]         id_inst            ,
    input     wire       [`ysyx_22051013_PC]           id_pc              ,

    input     wire       [`ysyx_22051013_REG]          id_op1             ,
    input     wire       [`ysyx_22051013_REG]          id_op2             ,
    input     wire	 [`ysyx_22051013_IMM]          id_imm 		  ,
    input     wire                                     id_rd_ena          ,
    input     wire       [`ysyx_22051013_REGADDR]      id_rd_addr         ,

    input     wire [7:0]         	id_alusrc  ,
    input     wire [3:0]      		id_lsctl   ,
    input     wire [1:0]     		id_wbctl    ,
    input     wire [3:0]                id_csrctl    ,
    input	wire 			id_load_flag	,
 
    output     reg       [`ysyx_22051013_INST]         ex_inst            ,
    output     reg       [`ysyx_22051013_PC]           ex_pc              ,

    output     reg       [`ysyx_22051013_REG]          ex_op1             ,
    output     reg       [`ysyx_22051013_REG]          ex_op2             ,
    output     reg	  [`ysyx_22051013_IMM]          ex_imm 		  ,
    output     reg                                     ex_rd_ena          ,
    output     reg       [`ysyx_22051013_REGADDR]      ex_rd_addr         ,

    output     reg [7:0]         	ex_alusrc  ,
    output     reg [3:0]      		ex_lsctl   ,
    output	reg 			ex_load_flag	,
    output     reg [3:0]                ex_csrctl    , 
    output     reg [1:0]     		ex_wbctl    
   );


always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE)begin 
    ex_inst <= 32'd0;
    ex_pc   <= `ysyx_22051013_ZERO64;
    ex_op1  <= `ysyx_22051013_ZERO64;
    ex_op2  <= `ysyx_22051013_ZERO64;
    ex_imm  <= `ysyx_22051013_ZERO64;
    ex_rd_ena <= 1'b0;
    ex_rd_addr <= 5'd0;
    ex_alusrc <= 8'd0;
    ex_lsctl <= 4'd0;
    ex_wbctl <= 2'b0;
    ex_csrctl <= 4'b0;
    ex_load_flag <= 1'b0;
     end
  else if(idex_flush) begin 
    ex_inst <= 32'd0;
    ex_pc   <= `ysyx_22051013_ZERO64;
    ex_op1  <= `ysyx_22051013_ZERO64;
    ex_op2  <= `ysyx_22051013_ZERO64;
    ex_imm  <= `ysyx_22051013_ZERO64;
    ex_rd_ena <= 1'b0;
    ex_rd_addr <= 5'd0;
    ex_alusrc <= 8'd0;
    ex_lsctl <= 4'd0;
    ex_wbctl <= 2'b0;
    ex_csrctl <= 4'b0;
    ex_load_flag <= 1'b0;
     end
  else if(idex_stall) begin 
    ex_inst <= ex_inst;
    ex_pc   <= ex_pc;
    ex_op1  <= ex_op1;
    ex_op2  <= ex_op2;
    ex_imm  <= ex_imm;
    ex_rd_ena <= ex_rd_ena;
    ex_rd_addr <= ex_rd_addr;
    ex_alusrc <= ex_alusrc;
    ex_lsctl <= ex_lsctl;
    ex_wbctl <= ex_wbctl;
    ex_csrctl <= ex_csrctl;
    ex_load_flag <= ex_load_flag;
     end
  else begin
    ex_inst <= id_inst;
    ex_pc   <= id_pc;
    ex_op1  <= id_op1;
    ex_op2  <= id_op2;
    ex_imm  <= id_imm;
    ex_rd_ena <= id_rd_ena;
    ex_rd_addr <= id_rd_addr;
    ex_alusrc <= id_alusrc;
    ex_lsctl <= id_lsctl;
    ex_wbctl <= id_wbctl;
    ex_csrctl <= id_csrctl;
    ex_load_flag <= id_load_flag;
     end
end

endmodule
  

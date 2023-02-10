/*-------
* Last modify date : 2022/2/8
* Function : execute addi 
*/
 
 `include "define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_exu(
	input wire          rst,
	input wire [`ysyx_22051013_DATA] op1,
	input wire [`ysyx_22051013_DATA] op2,
	input wire [`ysyx_22051013_PC]	pc_i	,
	input wire            jump_i   ,

	input wire [6:0]                 alu_sel,
	output wire [`ysyx_22051013_PC]   jump_pc_o  ,
	output wire            		ex_pcsrc_o ,
	output reg [`ysyx_22051013_DATA] alu_res
);

always@(*)begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		alu_res = `ysyx_22051013_ZERO64;
	end
	else begin
		case(alu_sel)
			7'b0000001 ,
			7'b0000010 ,
			7'b0000100 : begin alu_res = op1 + op2   ; end
			
			7'b0001000 ,
			7'b0010000 : begin alu_res = pc_i + `ysyx_22051013_PLUS4; end
		  default : begin alu_res = `ysyx_22051013_ZERO64; end
		endcase
	end
end

//out to ifu
assign ex_pcsrc_o = jump_i ;
assign jump_pc_o = (alu_sel == 7'b0001000 ) ? pc_i + op2 :
		     (alu_sel == 7'b0010000) ? op1 + op2 :
		     `ysyx_22051013_ZERO64 ;

endmodule

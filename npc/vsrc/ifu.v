/*-------
* Last modify date: 2022/2/9
* Function : pc generation , support jal
*/
 `include "define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_ifu(
 input  wire			clk		,
 input  wire			rst		,
 input	wire			pcsrc_i	,
 input	wire [`ysyx_22051013_PC]		ex_pc_i  ,
 output reg	[`ysyx_22051013_PC]			pc_o	
 );

 reg [`ysyx_22051013_PC] pc_next;
 wire [`ysyx_22051013_PC] pc_plus4;
 
 assign pc_plus4=(rst==`ysyx_22051013_RSTABLE)?`ysyx_22051013_STARTPC:(pc_o+`ysyx_22051013_PLUS4);
 assign pc_next = (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_STARTPC : ((pcsrc_i==0) ? pc_plus4 : ex_pc_i);

 always@(posedge clk) begin
	 if(rst == `ysyx_22051013_RSTABLE)begin
		pc_o<=`ysyx_22051013_STARTPC;
	end
  else begin
	  pc_o<=pc_next;
	end
end

endmodule

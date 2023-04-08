/*-------
* Last modify date: 2022/3/26
* Function :pip pc generation 
*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_ifu(
 input  wire			clk		,
 input  wire			rst		,
 inout  wire					pc_stall	,
 input	wire					id_pc_jump	,
 input	wire [`ysyx_22051013_PC]		id_pc_i  ,
 input	wire					ex_pc_jump	,
 input	wire [`ysyx_22051013_PC]		ex_pc_i  ,
 input  wire [`ysyx_22051013_PC]		bpu_pc_i  ,
 
 output	reg [`ysyx_22051013_INST]		inst_o,
 output reg	[`ysyx_22051013_PC]		pc_o	
 );

reg [`ysyx_22051013_PC] pc_next;
 
 assign pc_next = (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_STARTPC : 
 			ex_pc_jump==1'b1 ? ex_pc_i :
 			id_pc_jump==1'b1 ? id_pc_i :
 			bpu_pc_i;

 always@(posedge clk) begin
   if(rst == `ysyx_22051013_RSTABLE)begin
	pc_o <= `ysyx_22051013_STARTPC;
	inst_o <= rinst[31:0];
   end
   else if(pc_stall) begin
   	pc_o <= pc_o; 
   	inst_o <= inst_o;
   end
   else begin
	  pc_o<=pc_next;
	  inst_o <= rinst[31:0];
	end
end

//--------------------------------------dpi-c--------------------------------------------//
  
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte rlen);
reg [7:0] rlen = 8'd8;
reg [63:0] rinst;
always @(posedge clk) begin
  //if(rst !=`ysyx_22051013_RSTABLE)
    pmem_read(pc_next,rinst,rlen);
end

 //assign inst_o = rinst[31:0];
 
 wire _unused_ok = &{rinst[63:32]};
  
endmodule

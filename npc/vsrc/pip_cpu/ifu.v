/*-------
* Last modify date: 2022/3/26
* Function :pip pc generation 
*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_ifu(
 input  wire			clk		,
 input  wire			rst		,
 //inout  wire					pc_stall	,
 input	wire					id_pc_jump	,
 input	wire [`ysyx_22051013_PC]		id_pc_i  ,
 input	wire					ex_pc_jump	,
 input	wire [`ysyx_22051013_PC]		ex_pc_i  ,
 input  wire [`ysyx_22051013_PC]		bpu_pc_i  ,
 input	wire					inst_not_ready,
 
 input	wire					id_ready,
 output wire					if_valid,
 
 input	wire [`ysyx_22051013_DATA]		inst_i,
 output	reg [`ysyx_22051013_INST]		inst_o,
 output reg	[`ysyx_22051013_PC]		pc_o	
 );
 
 //hzd_ctl
reg jump_sign;

always@(posedge clk) begin 	
	if(id_pc_jump | ex_pc_jump) begin 
		jump_sign <= 1'b1;
	end
	else begin 
		jump_sign <= 1'b0;
	end
end

assign if_valid = inst_not_ready;

 
assign inst_o = /*jump_sign ? 32'd0 : */inst_i[31:0];

 always@(posedge clk) begin
   if(rst == `ysyx_22051013_RSTABLE)begin
	pc_o <= `ysyx_22051013_STARTPC;
   end
   else if(ex_pc_jump) begin 
   	pc_o <= ex_pc_i;
   end   
   else if(id_pc_jump) begin 
   	pc_o <= id_pc_i;
   end
   else if(if_valid | id_ready | jump_sign) begin
   	pc_o <= pc_o; 
   end
   else begin
	  pc_o<=bpu_pc_i;
	end
end
/*
//--------------------------------------dpi-c--------------------------------------------//
  
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte rlen);
reg [7:0] rlen = 8'd8;
reg [63:0] rinst;
always @(posedge clk) begin
  //if(rst !=`ysyx_22051013_RSTABLE)
    pmem_read(pc_next,rinst,rlen);
end
*/
 //assign inst_o = rinst[31:0];
 
 wire _unused_ok = &{inst_i[63:32]};
  
endmodule

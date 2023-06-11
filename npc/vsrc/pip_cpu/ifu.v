/*-------
* Last modify date: 2022/3/26
* Function :pip pc generation 
*/
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
module ysyx_22051013_ifu(
// input  wire			clk		,
 //input  wire			rst		,
 input	wire					id_pc_jump	,
 input	wire [`ysyx_22051013_PC]		id_pc_i  ,
 input	wire					ex_pc_jump	,
 input	wire [`ysyx_22051013_PC]		ex_pc_i  ,
 input  wire [`ysyx_22051013_PC]		bpu_pc_i  ,
 //input  wire					bpu_pc_jump,
 input	wire					inst_valid,
 
 input	wire					id_ready,
 input	wire					id_stall,
 output wire					if_valid,
 
 output wire					core_ready,
 //output wire					jump,
 
 input	wire [`ysyx_22051013_INST]		inst_i,
 output	reg [`ysyx_22051013_INST]		inst_o,
 output wire	[`ysyx_22051013_PC]		pc_next		
 //output reg	[`ysyx_22051013_PC]		pc_o	
 );
 
assign pc_next = ex_pc_jump ? ex_pc_i : 
		id_pc_jump ? id_pc_i : 
		bpu_pc_i;
		
assign if_valid = id_stall ? 1'b0 : ~inst_valid  ;
assign core_ready = id_ready | id_stall;
 
assign inst_o = /*jump_sign ? 32'd0 : */inst_i;

//assign jump = id_pc_jump | ex_pc_jump;
/*
 always@(posedge clk) begin
   if(rst == `ysyx_22051013_RSTABLE)begin
	pc_o <= `ysyx_22051013_STARTPC;
   end
   else if(update)begin
	  pc_o<= pc_next + `ysyx_22051013_PLUS4;
   end
   else if((if_valid | id_ready | id_stall) | bpu_pc_jump) begin
   	pc_o <= pc_next; 
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
 
 //wire _unused_ok = &{inst_i[63:32]};
  
endmodule

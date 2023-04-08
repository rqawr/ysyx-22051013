/*-------
* Last modify date : 2022/2/16
* Function : write back data to regs
*/

 `include "pip_cpu/define.v"
 module ysyx_22051013_wbu(
 	input       wire 			clk	,
 	input	    wire            		rst  ,
 	input	    wire [`ysyx_22051013_DATA]  ls_rd_data  ,
 	input       wire [1:0]      		wb_ctl    ,
 	input       wire [`ysyx_22051013_DATA]  exu_res      ,
 	input       wire [`ysyx_22051013_INST]  inst_i      ,
        input       wire [`ysyx_22051013_PC]    pc_i      ,
        input	wire                                     rd_ena          ,
    	input	wire       [`ysyx_22051013_REGADDR]      rd_addr         , 
        
        output	wire	[`ysyx_22051013_REGADDR]	wb_rd_addr_forward	,
        output	wire	[`ysyx_22051013_DATA]		wb_rd_data_forward	,
        output	wire                                     wb_rd_ena          ,
    	output	wire       [`ysyx_22051013_REGADDR]      wb_rd_addr         , 
 	output      reg  [`ysyx_22051013_DATA]  wb_data   
 	
);

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
       wb_data=`ysyx_22051013_ZERO64;
    end
    else begin
      case(wb_ctl)
        2'b01 :begin wb_data = ls_rd_data ; end
        2'b10 : begin wb_data = exu_res    ; end
        default : begin wb_data = `ysyx_22051013_ZERO64  ; end
    endcase
 end
end


assign wb_rd_ena = rd_ena	;
assign wb_rd_addr = rd_addr	;

//out to idu
assign wb_rd_addr_forward = rd_addr	;
assign wb_rd_data_forward = wb_data	;



//--------------------DPI-C----------------------//
import "DPI-C" function void pc_inst_end(input longint thepc_data, input bit[31:0] the_inst);
import "DPI-C" function void ebreak (input bit ebreak_ena);

wire ebreak_ena;
assign ebreak_ena = inst_i == `EBREAK_TRAP ? 1'b1 : 1'b0;


 always @(posedge clk) begin
   pc_inst_end(pc_i, inst_i);
   ebreak(ebreak_ena);
 end
 

endmodule


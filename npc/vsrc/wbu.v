/*-------
* Last modify date : 2022/2/16
* Function : write back data to regs
*/

 `include "define.v"
 module ysyx_22051013_wbu(
 	
 	input	    wire            		rst  ,
 	input	    wire [`ysyx_22051013_DATA]  ls_rd_data  ,
 	input       wire [1:0]      		wb_ctl    ,
 	input       wire [`ysyx_22051013_DATA]  alu_res      ,
 	
 	output      reg  [`ysyx_22051013_DATA]  wb_data   
 	
);

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
       wb_data=`ysyx_22051013_ZERO64;
    end
    else begin
      case(wb_ctl)
        2'b01 :begin wb_data = ls_rd_data ; end
        2'b10 : begin wb_data = alu_res    ; end
        default : begin wb_data = `ysyx_22051013_ZERO64  ; end
    endcase
 end
end

endmodule


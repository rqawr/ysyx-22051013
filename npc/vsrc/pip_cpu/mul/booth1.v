 module ysyx_22051013_booth1(
	 input wire [131:0]	mult	,
	 input wire [2:0]		sel	,
	 output wire [131:0]	part_mul	,
	 output wire 			carry
);
  wire y_add,y,y_sub; 
  wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;

  assign {y_add,y,y_sub} = sel;
  
  assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
  assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
  assign sel_double_negative =  y_add & ~y & ~y_sub;
  assign sel_double_positive = ~y_add &  y &  y_sub;

  assign part_mul = sel_double_negative ? ~{mult[130:0] , 1'b0} : 
            	sel_double_positive ? {mult[130:0] , 1'b0} :
            	sel_negative ? ~mult :
            	sel_positive ? mult :
            	132'd0;

  assign carry = sel_double_negative | sel_negative;
  
endmodule


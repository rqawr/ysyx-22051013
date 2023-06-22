    `define ysyx_22051013_ADDR	63:0
    `define ysyx_22051013_RESP	1:0
    `define ysyx_22051013_STRB	7:0
    `define ysyx_22051013_ID		4:0
    `define ysyx_22051013_ENABLE	1'b1
    `define ysyx_22051013_DISABLE 1'b0
    //slave
    `define ysyx_22051013_S_IDLE  2'b01 
    `define ysyx_22051013_S_DATA  2'b10
    `define ysyx_22051013_S_WRITE 2'b11
    //arbitrator
    `define ysyx_22051013_ARB_IDLE  3'b000
    `define ysyx_22051013_ARB_ADDR  3'b100
    `define ysyx_22051013_ARB_READ  3'b001
    `define ysyx_22051013_ARB_WRITE 3'b010
    `define ysyx_22051013_ARB_RESP  3'b011
    
    `define ysyx_22051013_AXI_BURST_FIXED 2'b00
    `define ysyx_22051013_AXI_BURST_INCR 2'b01
    `define ysyx_22051013_AXI_BURST_WRAP 2'b10
    
    //icache
    `define ysyx_22051013_CACHE		127:0
    `define ysyx_22051013_I_IDLE  4'b0001
    `define ysyx_22051013_I_READ  4'b0010
    `define ysyx_22051013_I_HIT   4'b0100
    `define ysyx_22051013_I_MISS  4'b1000  
    `define ysyx_22051013_STRB128_L 128'h0000000000000000ffffffffffffffff
    `define ysyx_22051013_STRB128_H 128'hffffffffffffffff0000000000000000
    
    //dcache
    `define ysyx_22051013_D_IDLE		6'b000001
    `define ysyx_22051013_D_READ		6'b000010
    `define ysyx_22051013_D_WRITE		6'b000011
    `define ysyx_22051013_D_HIT			6'b000100
    `define ysyx_22051013_D_MISSR		6'b001000  
    `define ysyx_22051013_D_DIRTYR	6'b010000
    `define ysyx_22051013_D_MISSW		6'b100000  
    `define ysyx_22051013_D_DIRTYW	6'b100001
    `define ysyx_22051013_D_FENCEI  6'b100011
    
    //dcache_sel
    `define ysyx_22051013_UART_START 	64'h00000000a00003f8
    `define ysyx_22051013_UART_END		64'h00000000a00003ff
    `define ysyx_22051013_RTC_START 	64'h00000000a0000048
    `define ysyx_22051013_RTC_END			64'h00000000a000004f
    `define ysyx_22051013_VGAC_START 	64'h00000000a0000100
    `define ysyx_22051013_VGAC_END		64'h00000000a0000107
    `define ysyx_22051013_VMEM_START 	64'h00000000a1000000
    `define ysyx_22051013_VMEM_END		64'h00000000a10752ff
    `define ysyx_22051013_KBD_START 	64'h00000000a0000060
    `define ysyx_22051013_KBD_END			64'h00000000a0000063
    `define ysyx_22051013_CLINT_START	64'h0000000002000000
    `define ysyx_22051013_CLINT_END		64'h000000000200ffff
    
    //clint
    `define ysyx_22051013_MTIME			64'h000000000200bff8
    `define ysyx_22051013_MTIMECMP	64'h0000000002004000
    
    

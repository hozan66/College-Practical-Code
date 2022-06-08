;Write in 8086 program to put the 8 bytes numbers 
;saved in 2100:234h in descending order?? 

mov ax,2100h
mov es,ax
mov bx,234h
mov si,0 
mov cx,4

loo: 
mov dx,arr[si] 
mov es:[bx],dx 
add si,2
sub bx,2
loop loo
hlt 


arr dw 1122h,3344h,5566h,7788h
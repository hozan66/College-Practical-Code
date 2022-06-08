;Q:put the number from 1111h,2222h,3333h.....8888h   
;into GPR's(General purpose register) from AX to DI,
;then get summation of every two Register together,
;then Return the same value again in the same Register?? 

mov cx,8
mov ax,1111h
loo:push ax
add ax,1111h
loop loo  
popa

pusha
add ax,dx
add bx,cx
add bp,sp  ;we can not save result in SP
add si,di  ;because it's pointer to stack
   
popa   
hlt
;check if the number of ones in array A1 is even
;copy the number in array A2 
;else(odd) copy the number in array A3

mov si,0
mov di,0
mov bp,0
mov cx,6  

loo: mov ah,A1[si]
cmp ah,0
jp lab2 

mov A3[bp],ah
inc bp
jmp lab3

lab2: mov A2[di],ah
inc di  

lab3: inc si
loop loo
hlt

A3 db ?
A1 db 23h,0AFh,87h,36h,0EFh,4Ah
A2 db ?

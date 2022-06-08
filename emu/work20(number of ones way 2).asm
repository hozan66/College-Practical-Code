;check if the number of ones in array a is even
;copy the number in array e 
;else(odd) copy the number in array o

mov si,0
mov di,0
mov bp,0
mov cx,6  

x: mov ah,a[si]
add ah,0
jpe x1 

mov o[bp],ah
inc bp
jmp x2

x1: mov e[di],ah
inc di  

x2: inc si
loop x
hlt


a db 23h,0AFh,87h,36h,0EFh,4Ah
e db 6 dup(?)
o db 6 dup(?)    ;o db 6 dup(0)


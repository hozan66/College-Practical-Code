;??find the min of 10 numbers
mov si,0
mov cx,9

mov ah,A1[si]
inc si

loo: cmp ah,A1[si]
    jng lab1 
    mov ah,A1[si]
 
    lab1:inc si

loop loo 
mov Y,ah
hlt

A1 db 10,8,1,-6,-2,96,-20,22,-15,30
Y db ?
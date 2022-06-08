;write a program to convey even numbers in array X of 8 bytes
;to array Y and store summation of odd numbers in Z

mov si,0
mov di,0
mov bl,2
mov cx,8  

loo: mov ah,0  ;important
mov bh,X[si]
mov al,X[si]
idiv bl
cmp ah,0
je lab2

add Z,bh
jmp lab3
lab2: mov Y[di],bh
inc di

lab3: inc si
loop loo
hlt

X db 2,-3,5,8,0,1,7,-6
Z db 0
Y db ?
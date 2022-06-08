;Write a program to exchange values of array A1 of 3 words with memory
;address start with 2300:4560h??
;exchange array with memory 

lds bx, addr
lea bp, a1

mov [bx], 9999h
mov 2[bx], 8888h
mov 4[bx], 7777h

mov cx, 3

swap: 
mov ax,[bx]
xchg ax, [bp]
xchg ax,[bx]
add bx, 02h
add bp, 02h
loop swap

hlt





a1 dw 1111h, 2222h, 3333h
addr dw 4560h, 2300h
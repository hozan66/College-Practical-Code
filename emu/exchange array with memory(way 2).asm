;Write a program to exchange values of array A1 of 3 words with memory
;address start with 2300:4560h??
;here we can't use ds

;d es:4560 

les bx, addr
mov si,0000h

mov es:[bx], 9999h
mov es:2[bx], 8888h
mov es:4[bx], 7777h

mov cx,3
x:
mov ax,a1[si]
xchg ax,es:[bx]
xchg ax,a1[si]

add si,2
add bx,2
loop x 


hlt





a1 dw 1111h, 2222h, 3333h
addr dw 4560h, 2300h
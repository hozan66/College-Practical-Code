;Q2: Write a program to find the following mathematical series?
;F=x + x^2 + x^3+......+x^10

mov bx,x
mov cx,10 

back:   mov ax,1
        mov dx,0 
        mov si,1

lab:  cmp si,cx
      ja stop
      mul bx
      inc si
      jmp lab
      
      
stop: add sum,ax 
loop back
hlt 

x dw 2
sum dw 0
;write a program to find Y

;    x^2   ifx<0
;Y=  X^3   ifx>0
;    2+x   ifx=0


mov si,0 
mov di,0
mov cx,6

lab1:mov ah,00
mov al,X[si]
cmp al,0
js lab2

           ; mov al,X[si]
            cmp al,0
            jz lab3
             
            mov bl,al 
            imul bl
            imul bl
            mov Y[di],ax
            jmp lab4
            
            lab3:add al,2
            mov Y[di],ax
            jmp lab4

lab2:imul al
mov Y[di],ax

lab4:inc si 
add di,2
loop lab1
hlt

X db 5,-3,-2,8,0,6
Y dw ?
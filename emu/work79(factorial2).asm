;Q1: Write a program to find the following mathematical series;
;Using procedure?
;F=1! + 2! + 3! + ....... + 10!

mov cx,10
back:   mov bx,cx
        mov ax,1 
        
    call ff 
    add sum,ax
    loop back
    hlt

ff proc 
    fac:
    mul bx
    dec bx
    jnz fac
    ret
    ff endp 

sum dw 0
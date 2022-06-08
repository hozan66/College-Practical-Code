;Q1: Write a program to find the following mathematical series;
;Using procedure?
;F=1! + 2! + 3! + 4! + 5!

mov cx,5
next:   mov bl,cl
        mov ax,1 
        
    call fact 
    add sum,ax
    loop next
    ret

fact proc 
    x1:
    mul bl
    dec bl
    jnz x1
    ret
    fact endp 

sum dw 0
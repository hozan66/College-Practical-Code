;write a program to count Number of ones 
;in a number in array of 5 bytes??

mov si,0
mov di,0
mov bl,0
back:cmp bl,5
jae exit
                    mov cx,8
                    mov bh,0
                    loo:rol A1[si],1
                    jc lab2
                    jmp lab3
                    lab2:inc bh
                    lab3:loop loo   
                    inc bl
inc si
mov co[di],bh
inc di
jmp back
exit:hlt



A1 db 11h,3Ah,12h,0FFh,03h
co db  ?
;write a program to count Number of ones 
;in a number in array of 5 bytes??

mov si,0
mov di,0
mov cx,5
loo:mov bl,0
mov bh,0
back:cmp bl,8
                    jae exit
                    rol A1[si],1
                    jc lab2
                    inc bl
                    jmp back 
                    lab2:inc bh
                    inc bl
                    jmp back
exit:inc si
mov co[di],bh
inc di
loop loo
hlt



A1 db 11h,3Ah,12h,0FFh,03h
co db  ?
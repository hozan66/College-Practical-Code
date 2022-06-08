;??count number of ones in a byte size of A1 array
mov cx,5
mov si,0

loo:
mov bl,1
mov dl,0 

mov al,A1[si] 

back: cmp bl,8
ja exit
                shl al,1
                jc lab1
                inc bl 
                jmp back
                lab1:inc dl
                inc bl
                jmp back 
                
exit:mov Y[si],dl
inc si
loop loo 
hlt



A1 db 11h,22h,1fh,27h,0A2h
Y db ?
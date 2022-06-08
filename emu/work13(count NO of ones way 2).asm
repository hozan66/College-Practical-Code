;??count number of ones in a byte size 
mov bl,1
mov dl,0 

mov al,0FEh 

back: cmp bl,8
ja exit
                shl al,1
                jc lab1
                inc bl 
                jmp back
                lab1:inc dl
                inc bl
                jmp back
exit: hlt

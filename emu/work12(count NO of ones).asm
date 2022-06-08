;??count number of ones in a byte size 
mov cx,8
mov bl,0 

mov al,17h
back: shl al,1
jc lab2 
jmp lab3
lab2: inc bl
lab3: loop back
exit: hlt

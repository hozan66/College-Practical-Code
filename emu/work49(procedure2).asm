;What the value of the variable Z ?? 

org 100h  
mov al,4
mov bl,3
call myADD 
mov z,cl ;z=0Eh
hlt     
z db ?
myADD proc 
add al,bl
mov ch,2
mul ch
mov cl,al
ret
myADD endp 
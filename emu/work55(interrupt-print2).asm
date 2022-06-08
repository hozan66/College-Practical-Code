;print the followint
;a
; a
;  a

mov ah,02h   
mov cx,3

back: mov dl,'a'
int 21h  

mov dl,0Ah
int 21h 
loop back
hlt
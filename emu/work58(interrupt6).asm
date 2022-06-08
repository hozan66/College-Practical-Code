;print the following ??
;              27h

;0             ABC
;
;2             ABC
;
;4             ABC

mov cx,3
mov dh,0
mov dl,27h

back: push dx 
mov bh,0
mov ah,02h
int 10h

mov ah,09h
mov dx,offset msg
int 21h 

pop dx
add dh,2
loop back
hlt

msg db 'ABC$'
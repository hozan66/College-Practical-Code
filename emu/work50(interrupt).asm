
mov ah,09h
mov dx,offset msg
int 21h

msg db 'hello$'
mov ah,09h
mov dx,offset msg
int 21h

mov ah,07h
mov al,2
mov bh,71h 
mov cx,0000h
mov dx,0203h 
int 10h
hlt  

msg db 'welcome$'

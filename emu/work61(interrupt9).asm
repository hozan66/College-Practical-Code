mov ah,06   ;scroll up

mov al,00h  ;scroll (up) for the whole screen
mov bh,71h  ;7: color of screen, 1: color of font

mov cx,0000h  ;starting point
mov dx,184Fh  ;ending point
int 10h
hlt
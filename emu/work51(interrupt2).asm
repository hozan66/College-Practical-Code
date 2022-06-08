;Write a program to print 'hozan' in the middle of screen??

org 100h
mov ah,02h
mov bh,00h
mov dx,0C27h    ;row=0Ch and col=27h
int 10h

mov ah,09h
mov dx,offset msg
int 21h
hlt

msg db 'hozan$'
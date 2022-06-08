;Write a program to input ABCD from keyboard, then print it on the screen??

mov ah,0Ah
mov dx,offset pl
int 21h 

mov ah,02h
mov dl,09h
int 21h

mov ah,09h
mov dx,offset pl+2
mov pl[6],'$'
int 21h 
hlt

pl db 10 , ? , 10 dup(?)
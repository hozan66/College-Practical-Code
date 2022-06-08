;Write a program to enter 2 numbers from keyboard
;and collect them, then print the result on screen?? 

mov ah,01h
int 21h
mov cl,al 
int 21h

and cl,0Fh
and al,0Fh
add al,cl
or al,30h

mov dl,al
mov ah,02h
int 21h
hlt
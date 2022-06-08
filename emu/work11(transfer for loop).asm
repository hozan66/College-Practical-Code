;A=5,Y=0;
;for(i=0;i<10;i++)
;y=y+A

mov bl,0
back: cmp bl,10
jae exit
mov al,A
add y,al
inc bl
jmp back
exit: hlt

A db 5
Y db 0
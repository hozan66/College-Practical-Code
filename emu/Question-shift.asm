;Y=(A.B+C) XNOR ~B << 2
;A=05h,B=0Ah,C=12h


mov al, a
and al, b
or al, c
mov bl, b
not bl
xor al, bl
not al
shl al, 2
mov y, al

hlt         

a db 05h
b db 0Ah
c db 12h            
y db ?
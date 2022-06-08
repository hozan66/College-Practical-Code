;??equivalent code of movsb
;using lodsb and stosb  

lea si,x
lea di,y
mov cx,3
cld
loo: lodsb
     stosb
loop loo
hlt

x db 'A','B','C'
y db ?
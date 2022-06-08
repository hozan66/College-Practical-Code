;moving 
mov bl,12o
mov bh,22h
mov ds,bx
mov ax,1234h
mov es,ax
mov es:[220h],1312h
mov es:[222],1514h 
hlt

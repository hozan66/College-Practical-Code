mov ax,1212h
mov bx,3434h

push ax        ;store ax in stack
push bx        ;store bx in stack

pop ax         ;set ax to original value of bx
pop bx         ;set bx to original value of ax
hlt
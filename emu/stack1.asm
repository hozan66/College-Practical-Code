mov ax,1234h
push ax                ;store value of Ax in stack
mov ax,5678h           ;modify Ax value
pop ax                 ;restore the original value of Ax
hlt

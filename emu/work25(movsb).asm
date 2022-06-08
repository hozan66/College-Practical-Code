lea si,x
lea di,y
mov cx,5

loo:              ;mov al,[si]
                  ;mov [di],al
 movsb            ;inc si
                  ;inc di
loop loo

x db 'hello'
y db 5 dup(?)
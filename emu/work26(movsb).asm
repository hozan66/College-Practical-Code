lea si,x+4
lea di,y+4
mov cx,5
  std          ;copy in reverse order
loo:              

movsb
loop loo

x db 'hello'
y db 5 dup(?)
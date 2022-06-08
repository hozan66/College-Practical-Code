;??Follow the program step by
;step write the output
     
mov ah,0f0h
sahf 
sti
std
pushf
pop si

mov bx,0980h
push bx

popf
hlt

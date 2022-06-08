;print the followint
;a
; a
;  a

org 100h
mov cx,3

back:mov dl,'a'
call print
mov dl,0Ah
call print
loop back
hlt

print proc
mov ah,02h
int 21h
ret
print endp
;print the followint
;a
; a
;  a

mov ah,09h
mov dx,offset msg
int 21h 
hlt

msg db 'a',0Ah,'a',0Ah,'a',0Ah,'$'  ;it's like one word
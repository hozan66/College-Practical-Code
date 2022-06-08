mov ah,0Ah       ;input stream of bytes
mov dx,offset pl
int 21h

pl db 10,?,10 dup(?) 

;pl db max, actual, max dup(?)
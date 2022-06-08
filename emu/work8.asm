;compare two array A and B if we have overflow
;put 'O' else put 'N'
  
mov si,0
mov cx,3
lab1:mov ah,A[si]
add ah,B[si]
jo x1
mov R[si],'N'
jmp x2

x1:mov R[si],'O'
x2:inc si
loop lab1
hlt




A db 120,100,-110
B db 9,10,-30
R db ?
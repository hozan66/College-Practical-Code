;compare two array A and B if number is positive
; put 'P' else put 'N'
  
mov si,0
mov cx,3
lab1:mov ah,A[si]
cmp ah,B[si]
js x1
mov R[si],'P'
jmp x2

x1:mov R[si],'N'
x2:inc si
loop lab1
hlt




A db -12,100,-110
B db 9,10,-30
R db ?
;?check array of 5 signed bytes if the number
;is positive ,then put 'P' in array R else put 'N'
mov si,0
mov cx,5
x1:mov al,A[si]
cmp al,0
js x2

mov R[si],'P'
jmp x3

x2:mov R[si],'N'
x3:inc si 
loop x1
hlt 

A db 33,0,-5,11,-1
R db ?
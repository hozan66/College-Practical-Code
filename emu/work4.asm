;compare two array A and B if they are equal
; put 'E' else put 'N'  
mov si,0
mov cx,5
lab1:mov al,A[si]
cmp al,B[si]
jz x1
mov R[si],'N'
jmp x2

x1:mov R[si],'E'
x2:inc si
loop lab1
hlt




A db 13h,11h,15h,20h,10h
B db 12h,11h,13h,20h,31h
R db ?
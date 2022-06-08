;write a program to compare two arrays of 3 bytes 
;if you have a carry put 'C' in array R1 else put ;N;   

mov si,0
mov cx,3  
x2:mov al,A1[si]
cmp al,A2[si] 

jc x1
mov R1[si],'N'
jmp x3

x1:mov R1[si],'C'
x3:inc si
loop x2


  




A1 db 15h,17h,23h
A2 db 13h,22h,45h 
R1 db ?
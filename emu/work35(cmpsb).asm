;write a program to compare between contain of X and Y
;and stop the program when is there any difference

lea si,x
lea di,y
cld 
mov cx,3
repe cmpsb     ;copare [si] with [di]

jnz l1
mov q,'E'  ;equal  
jmp l2
l1: mov q,'N'  ;not equal
l2: hlt

x db 'ABC'
y db 'ABD' 
q db ?
;check two strings if there are equal or not??

lea si,str1 ;mov si,offset str1
lea di,str2 ;mov di,offset str2
cld 
mov cx,8
repe cmpsb     ;copare [si] with [di]

jnz l1
mov result,'E'  ;equal  
jmp l2
l1: mov result,'N'  ;not equal
l2: hlt

str1 db 'password'
str2 db 'password' 
result db ?
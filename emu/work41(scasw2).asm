;compare two variable of size word.
;put '==' or '!=' in result variable 

mov si,offset str1
mov di,offset str2
mov ax,[si]
cld
scasw
jnz L1
mov result,'=='
jmp end 
L1:mov result,'!='
end:hlt

str1 dw 'pa'
str2 dw 'pa'
result dw ?
;??copy the numbers that < 13 in array A1 of 9 bytes to array A2
mov si,0
mov di,0
mov cx,9
loo:mov ah,A1[si]
cmp ah,13
jae exit
mov A2[di],ah
inc di
exit:inc si
loop loo
hlt

A1 db 11,8,17,9,14,13,2,15,5 
A2 db ?
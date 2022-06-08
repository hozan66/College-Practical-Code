lea di,x 
mov al,'r'
cld          ;DF=0
mov cx,4
repne scasb    ;compare Al with [di]

jz l1
mov q,'N'  ;not found
jmp l2
l1: mov q,'F' ;found
l2:hlt

x db 'mark' 
q db ?
;read numbers from array of bytes V1 then loop until '7' is found,or 5 times.

mov si,0
mov cx,5
back: mov al,v1[si]
inc si   
cmp al,7
loopnz back
jz next
mov v2,'N' 
jmp end
next: mov v2,'F'
end: ret

v1 db 9,8,7,6,5
v2 db ?
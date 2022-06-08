;Q: A1 is array of 8 bytes,copy to array A2 until number 12 is found ?

mov cx,8
mov si,0

lab1:mov ah,A1[si]
cmp ah,12
jne lab2
jmp lab3
lab2:mov A2[si],ah
inc si
loop lab1
lab3:hlt

A1 DB 13, 14, 10, 15, 16, 12, 18, 17
A2 DB ?
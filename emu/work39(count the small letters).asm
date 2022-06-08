;Write a program to count the small letters??

lea si,x
mov cx,7

back:
test [si],20h
jnz lab1 
jmp lab2
lab1:add count,1
lab2:inc si
loop back
hlt


x db 'a','B','D','e','d','H','t'
count db 0
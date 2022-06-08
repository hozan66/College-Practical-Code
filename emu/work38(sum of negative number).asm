;Write a program to find the summation of negative numbers??

lea si,x
mov cx,5

back:mov al,[si]
shl al,1
js lab1 
jmp lab2
lab1:mov bl,[si]
add sum,bl
lab2:inc si
loop back
hlt




x db -1,-2,4,-3,5
sum db 0
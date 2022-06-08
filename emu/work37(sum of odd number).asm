;Write a program to find the summation of odd numbers??

lea si,x
mov cx,5

back:mov al,[si]
shr al,1
jc lab1 
jmp lab2
lab1:mov bl,[si]
add sum,bl
lab2:inc si
loop back
hlt




x db 3,2,5,4,6
sum db 0
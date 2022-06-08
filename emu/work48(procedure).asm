;write a program to find the sum of two numbers 
;and store the result in Register CL (using procedure)??  

org 100h
mov al,6 ;al=6
mov bl,3 ;bl=3
call sum
hlt
sum proc
add al,bl ;al=9
mov cl,al ;cl=9 
ret
sum endp
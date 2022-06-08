;Q3): the following program compute square of  16 bit value and put it into two locations of variable square,
;but there are two error . a) correct and  b) change the program  for one byte . 
 
mov	si,offset sqr
mov di,0  
mov cx,2 

back: 
mov	al,value[di]   
mov ah,0
call	mysqr    

mov	byte ptr [si],al  
add	si,2h 
mov	byte ptr [si],ah 
add	si,2h 

inc di
loop back
hlt  

mysqr	proc
pushf
mul	al
popf
ret  

mysqr		endp  

value db	56h,01h
sqr	db	8 dup(0)

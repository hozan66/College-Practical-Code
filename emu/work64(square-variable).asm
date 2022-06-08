;the following program compute square of  16 bit value and put it into two locations of variable square,
;but there are two error . a) correct and  b) change the program  for one byte . 

mov	ax,value
call	mysqr    

mov	si,offset sqr
mov	word ptr [si],ax
inc	si 
inc	si
mov	word ptr [si],dx
hlt  

mysqr	proc
pushf
mul	ax
popf
ret  

mysqr		endp  


value		dw	0156h
sqr	dw	2 dup(0)

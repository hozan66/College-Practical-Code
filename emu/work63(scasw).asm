;Q1: what will be the value of result after running this program??

Mov	cx,2
mov	si,offset str1
		
bck: mov ax,[si]		
mov	di,offset str2		
add	si,2				
	scasw
loope  bck	
			
    jnz	L1
    mov	 result ,0AAh	
jmp end	
L1:	mov	result,11h	
jmp end
end: hlt 

Str1	dw	'ch23'
Str2	dw	'ch32'
result	db	1  dup(0) 


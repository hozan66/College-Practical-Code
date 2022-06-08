;this procedure prints a string, the string should be null terminated
;(have zero in the end), the string address should be in SI register.

lea si,msg
call print_me   
hlt

print_me proc
    next_char:
    cmp b.[si],0
    je stop
    mov al,[si]
    mov ah,0Eh       
    int 10h          ;using interrupt to print a char in AL
    inc si           
    jmp  next_char
 stop: ret
   print_me endp
                        
msg db 'Hello World!',0
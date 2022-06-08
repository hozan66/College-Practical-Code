;write a subroutine (procedure) to display a character stored in DL register.
;Use this subroutine (procedure) to print 'TEST' word  

mov dl,'T'
call M1

mov dl,'E'
call M1

mov dl,'S'
call M1

mov dl,'T'
call M1 
hlt
 
M1 proc 
mov ah,02h  
int 21h
ret
M1 endp
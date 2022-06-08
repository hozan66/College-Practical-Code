;Write a program to read a string of characters from array
;and print on the screen using interrupt instruction?? 

lea si,msg
mov ah,02h

back: mov dl,b.[si]
      cmp dl,0
      jz stop 
      inc si
      int 21h 
      jmp back
      
      stop: hlt

msg db 'Welcome!',0


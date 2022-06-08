;Use procedure to find factorial of 4 numbers in array??

lea si,fac1
lea di,fac2
mov cx,4

back: mov al,1 
      mov ah,0 
      mov bl,1
      call pp
      
      add di,2
      inc si
      loop back   
      hlt
      
      pp proc
lab:  cmp bl,[si] 
      ja stop   
      mul bl
      inc bl
      jmp lab
         
stop: mov [di],ax
      ret
      endp

fac1 db 2,3,4,5
fac2 dw ? 
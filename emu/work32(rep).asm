lea di,x 
mov cx,3
 mov al,'D'  
 cld   ;DF=0
 
rep stosb         ;copy byte fron Al to [DI]    

 hlt
x db 'A','B','C'
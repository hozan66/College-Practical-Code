lea di,x+3
 mov al,'D'  
 cld
stosb         ;copy byte fron Al to [DI]
 hlt
x db 'A','B','C'
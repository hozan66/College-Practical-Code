;Q2): Write program to read 8 bytes from memory start address 1000:200h 
;then save it on array V1? Use string instructions 

mov ax,1000h
mov ds,ax 
mov di,offset v1

mov [200h],2211h  
mov 2[200h],4433h
mov 4[200h],6655h
mov 6[200h],8877h

mov si,200h 
mov cx,8
rep movsb
hlt

v1 db 8 dup(?)
;write a program to copy flag into memory
;addess 2100:410h,then copy cotains of memory 2200:320h into flag
;0-ffh                
;memory1 cotains 75h,memory2 cotains A5h

lds si,M1
les di,M2

mov ds:[si],75h
mov es:[di],0A2h

mov ah,0
sub ah,0ffh

lahf
mov ds:[si],ah

mov ah,es:[di]
sahf

hlt


M1 dw 410h,2100h
M2 dw 320h,2200h
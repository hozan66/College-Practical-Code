;find the value of Y=2^4 using proceture??

mov al,1
mov bl,2
mov cx,4

back: call m2
loop back

mov y,ax
hlt

m2 proc
    mul bl  ;ax=al*bl
    ret
m2 endp     

y dw ?
;find inverse of array??

lds bx,y 
mov [bx],1211h
mov 2[bx],1413h


mov al,[bx]
xchg al,3[bx]
xchg al,[bx]

mov al,1[bx]
xchg al,2[bx] 
xchg al,1[bx]


y dw 1ABCh,2000h

hlt


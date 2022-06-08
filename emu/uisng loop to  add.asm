; first question: uisng loop add 5 to numbers in 2100:3450

lds si,v1

mov [si],1110h
mov 2[si],1312h
mov 4[si],1514h
mov 6[si],1716h
   
mov cx,8

x: add [si],5h
inc si
loop x
   
hlt

v1 dw 3450h,2100h

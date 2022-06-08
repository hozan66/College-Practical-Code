;Add to AX 100 then loop until result fits into AL alone(AL becomes full), or 5 times.

mov ax,0
mov cx,5
lab: add ax,100   ;here the number in decimal which equal to 64h
cmp ah,0
loope lab
ret
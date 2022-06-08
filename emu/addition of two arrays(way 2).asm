;find addition of two arrays of 6 words then put the elements in a new array?? 
mov si,0000h
mov cx,6
x: mov bx, a1[si]
add bx,a2[si]
mov z[si],bx
add si,2 
loop x
hlt
a1 dw 1111h,1122h,1133h,1144h,1155h,1166h
a2 dw 0eeefh,2211h,3311h,4411h,5511h,6611h   
z dw ?
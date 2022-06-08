; second quetion
;................
;add 6 words in array a1 to 6 words in array a2
;note same result in array z 


lea si,a1
lea di,a2
lea bp,z
mov cx,6
x: mov ax,[si]
add ax,[di]
mov [bp],ax
add si,2h 
add di,2h 
add bp,2h
loop x
hlt
a1 dw 1111h,1122h,1133h,1144h,1155h,1166h
a2 dw 0eeefh,2211h,3311h,4411h,5511h,6611h   
z dw ?
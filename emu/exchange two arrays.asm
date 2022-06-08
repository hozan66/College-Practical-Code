;exchange two arrays
;Q1:exchange array A1 of 3 bytes with array A2??   
lea si,x
lea di,y

mov cx,3
ex: 
mov al,[si]
xchg al,[di]
xchg al,[si]
inc si
inc di
loop ex

hlt


x db 11h,22h,33h
y db 44h,55h,66h



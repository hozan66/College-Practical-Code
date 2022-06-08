;exchange two arrays
;Q1:exchange array A1 of 3 bytes with array A2??   
mov si,0000h
mov di,0000h

mov cx,3
ex: 
mov al,x[si]
xchg al,y[di]
xchg al,x[si]
inc si
inc di
loop ex

hlt


x db 11h,22h,33h
y db 44h,55h,66h



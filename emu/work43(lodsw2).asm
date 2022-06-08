;read 5 words from array A1 into register AX

lea si,A1
cld
mov cx,5
rep lodsw  ;finally there will be 555h in AX
hlt

A1 dw 111h,222h,333h,444h,555h 
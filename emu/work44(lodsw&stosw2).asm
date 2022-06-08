;??read 5 words from array A1 and save them in array A2 
;if they were positive (using lodsw & stosw) 

lea si,A1
lea di,A2
mov cx,5

back: lodsw
cmp ax,0
jl next
stosw
next: dec cx  
jnz back
hlt

A1 dw 123,-233,4456,239,187
A2 dw 5 dup(?)              ;Reserve 5 places in the memory!!!
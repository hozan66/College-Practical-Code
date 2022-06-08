;write program to put number 1111h into all GPR's(general purpose rigister) using stack instruction+

mov cx,8
loo: push 1111h
loop loo 
popa
hlt
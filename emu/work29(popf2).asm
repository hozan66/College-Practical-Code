;Q:change flag bits
;OF=IF=ZF=PF=1 & all other=0

mov ax,0A46h
push ax
popf
hlt
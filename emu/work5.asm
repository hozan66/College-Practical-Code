;flag instructions
;without operand 
std
cli
stc
cld
sti
clc
cmc

lahf             ;ah=03h
mov ah,0ffh      ;ah=ffh
sahf
hlt
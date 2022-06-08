;find value of Y?
;Y=A*B,A=-20,B=10
MOV AL,A
MOV BL,B
IMUL BL
MOV Y,AX  ;the result in AX 
HLT




A DB -20D
B DB 10D
Y DW ?
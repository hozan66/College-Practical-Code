;write a program to multiply 
;each number of A1 in array of 5 bytes
;by 2 & save in array A2  
MOV SI,0
MOV DI,0
MOV BL,2H
MOV CX,5
X:MOV AL,A1[SI]
MUL BL    ;automatically the result svae in AX
MOV A2[DI],AX  
INC SI
ADD DI,2
LOOP X
HLT






A1 DB 10H,20H,30H,40H,50H
A2 DW ?
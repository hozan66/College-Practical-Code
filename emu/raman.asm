;DS=0200, SS = 0320, BP= 0300, SP=03F00, AX=A07F, BX = A730,
;DX =0200 and CX=0000

MOV AX,0200H
MOV DS,AX 
MOV AX,0320H 
MOV SS,AX 

MOV BP,0300H
MOV SP,03F00H
MOV AX,0A07FH
MOV BX,0A730H 
MOV DX,0200H
MOV CX,0000H

PUSH AX
PUSH BX
PUSH DX
PUSH BP
MOV BP, SP
ADD CX, [BP]
ADD CX, [BP+2]
POP BP
POP AX
POP BX
POP DX
HLT
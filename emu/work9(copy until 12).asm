;Q: A1 is array of 8 bytes,copy to array A2 until number 12 is found ?

MOV CX, 8
MOV SI, 0
LAB1:
    MOV AH, A1[SI]
    CMP AH, 12
    JE LAB2 ;JZ
    MOV A2[SI], AH
    INC SI
    LOOP LAB1
    LAB2: HLT

A1 DB 13, 14, 10, 15, 16, 12, 18, 17
A2 DB ?
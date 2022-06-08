;store 5 times bytes (ADh) into memory locations (start from ES:105 to ES:101)     

mov di,105h
std        ;df=1
mov cx,5
mov al,0ADh
rep stosb
hlt
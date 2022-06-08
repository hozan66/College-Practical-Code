;What will happen after running the following program??

 mov cx,5
 lea si,var
 lab: mov [si],cl
 inc si
 loop lab
 ret ;it's the same hlt    
 
 var db ?
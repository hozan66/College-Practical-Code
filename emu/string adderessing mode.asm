;use string adderessing mode to copy 3 words from 
;array A1 to array A2 in reverse order 
  std
lea si,A1[4]
lea di,A2

 
movsw
movsw
movsw  
  
 hlt
 
A1 dw 1111h,2222h,3333h
A2 dw ?
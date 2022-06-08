;The following example combines the two reading a character 
;from the keyboard and displaying it:

mov ah,01h    ;keyboard input subprogram
int 21h       ;read character into AL  
 
mov dl,al           ;copy character to dl
mov ah,02h          ;character output subprogram
int 21h             ;display character in dl 
hlt
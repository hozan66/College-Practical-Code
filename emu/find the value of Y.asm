;find the value of Y??
;Y=(-A+B)-C
mov al, a  ;al=80h
neg al     ;al=80h      
;cf=1,of=1,sf=1,af=0,pf=0,zf=0

add al, b  ;al=A3h
;cf=0,of=0,sf=1,af=0,pf=1,zf=0

sub al, c  ;al=24h 
;cf=0,of=1,sf=0,af=1,pf=1,zf=0

mov y, al

hlt

a db 80h
b db 23h
c db 7fh
y db ?
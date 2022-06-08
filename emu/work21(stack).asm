;exchange two memory contain 2100:300h = FF&EEh
;with Register si =BBAAh.using stack istruction 

mov si,0BBAAh
push 2100h
pop ds
mov [300h],0FFEEh

push si
push [300h]

pop si
pop [300h]
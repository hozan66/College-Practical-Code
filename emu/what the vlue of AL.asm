;check memory and what the vlue of al
mov ax,2100h
mov ds,ax
mov ax,2200h
mov es,ax
mov ax,2300h
mov ss,ax
mov si,0FF11h
mov ds:[2103h],3B2Ah
mov ss:[531h],5432h
mov cx,ds:[2103h]
mov es:[1A3h],si
mov al,ss:[531h]
hlt
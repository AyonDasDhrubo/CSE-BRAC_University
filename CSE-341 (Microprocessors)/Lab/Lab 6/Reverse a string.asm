;Task: Reverse a string

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC

;iniitialize DS
MOV AX,@DATA
MOV DS,AX
;Code here
MOV CX, 5
insert:
MOV AH, 1
int 21H
PUSH AX
LOOP insert
MOV AH, 2
MOV DL, 10
INT 21H
MOV DL, 13
INT 21HMOV CX, 5
reverse:
POP DX
MOV AH, 2
INT 21H
LOOP reverse

;exit to DOS
MAIN ENDP
    END MAIN
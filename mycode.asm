.MODEL SMALL
.STACK 100H
.DATA      
store db (10) ?
.CODE
MAIN PROC
;iniitialize DS
MOV AX,@DATA
MOV DS,AX
;Code here
;MOV CX, 5
;insert:
;MOV AH, 1
;int 21H
;PUSH AX
;LOOP insert
;MOV AH, 2
;MOV DL, 10
;INT 21H
;MOV DL, 13
;INT 21H
;MOV CX, 5
;reverse:
;POP DX
;MOV AH, 2
;INT 21H
;LOOP reverse  


MOV CX, 10
taking_input:
mov ah, 1
int 21h
push ax
loop taking_input

mov si, 0        

outoo:
mov ah, 2
pop bx
int 21h
loop outoo


;exit to DOS
MAIN ENDP
END MAIN         



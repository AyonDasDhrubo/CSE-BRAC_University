;Task 1: Take input the length of the user’s name. Then, take the name as input, and then display

.MODEL SMALL
.STACK 100H
.DATA
n db 12 dup(?)
a db "Enter Name: $"
b db "Output: $"
.CODE
MAIN PROC

;initialize DS
MOV AX,@DATA
MOV DS,AX
; TAKING INPUT
lea dx,a
mov ah,9
int 21h
mov cx,4
mov si,0
mov ah,1
start:
int 21hmov n[si],al
add si,1
loop start
;PRINTING
mov ah,2
mov dl,0DH
int 21h
mov dl,0AH
int 21h
lea dx,b
mov ah,9
int 21h
mov cx,4
mov si,0
mov ah,2
print:
mov dl,n[si]
mov ah,2
int 21h
add si,1
loop print

;exit to DOS
exit:
MAIN ENDP
    END MAIN
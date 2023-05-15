;Task-2: Perform addition/subtraction/division/multiplication by taking inputs from the user.

;(Add)

.MODEL SMALL
.STACK 100H
.DATA
A DB "Input your first number:$"
B DB "Input your second number:$"
C DB "Summation:$"
.CODE
MAIN PROC
;initialize DS
MOV AX,@DATA
MOV DS,AX

;first number
LEA DX, A
MOV AH, 9
INT 21H

;Taking Input first number
MOV AH, 1
INT 21H
MOV BH, AL

;line fit, new line
MOV AH, 2
MOV DL, 0DH
INT 21H
MOV DL, 0AH
INT 21H

;second number
LEA DX, B
MOV AH, 9
INT 21H

;Taking input second number
MOV AH, 1
INT 21H
MOV BL, AL
ADD BH, BL
SUB BH, 030H
MOV AH, 2
MOV DL, 0DH
INT 21H
MOV DL, 0AH
INT 21H
LEA DX, C
MOV AH, 9
INT 21H

;showing output
MOV AH, 2
MOV DL, BH
INT 21H

;exit to DOS
MAIN ENDP
    END MAIN

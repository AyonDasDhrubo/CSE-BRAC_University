;Task-2: Perform addition/subtraction/division/multiplication by taking inputs from the user.

;(MUL) 

.MODEL SMALL
.STACK 100H
.DATA
A DB "Input your first number:$"
B DB "Input your second number:$"
C DB "Multiplication Result:$"
.CODE
MAIN PROC
    
;iniitialize DS
MOV AX,@DATA
MOV DS,AX

;first number
LEA DX, A
MOV AH, 9
INT 21H

;Taking Input first number
MOV AH, 1
INT 21H
SUB AL, 030H
MOV BL, AL

;line fit, new lineMOV AH, 2
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
SUB AL, 030H
MUL BL
MOV BL, AL

;ADD BL, 030H
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
MOV DL, BL
ADD DL, 030H
INT 21H

;exit to DOS
MAIN ENDP
    END MAIN

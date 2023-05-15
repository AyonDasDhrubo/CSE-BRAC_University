;Task-2: Perform addition/subtraction/division/multiplication by taking inputs from the user.

;(Div)
.MODEL SMALL
.STACK 100H
.DATA
str db "Enter the first number: $"
str2 db "Enter the second number: $"
.code
MAIN PROC
    
MOV AX, @DATA
MOV DS, AX
MOV AH, 9
LEA DX, str
INT 21h
MOV AH, 1
INT 21h
MOV BL, AL
SUB BL, 030H
MOV AH, 2
MOV DL, 0DH
INT 21h
MOV DL,0AH
INT 21h
MOV AH,9
LEA DX,str2
INT 21h
MOV AH, 2
MOV AH,1
INT 21h
MOV CL, AL
SUB CL, 030h
MOV AX, BX
DIV CL
ADD AL, 030h
MOV DL, AL
MOV AH, 2
INT 21h

MAIN ENDP
    END MAIN
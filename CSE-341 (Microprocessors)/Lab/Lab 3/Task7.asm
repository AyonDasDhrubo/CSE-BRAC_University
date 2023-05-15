;Task 7: Write an assembly program to check whether a number is even or odd.

.MODEL SMALL
.STACK 100H
.DATA
A DB "Even Number $"
B DB "Odd Number $"
.CODE
MAIN PROC
    
MOV AX, @DATA
MOV DS, AX
MOV AX, 11
MOV BL,2
DIV BL
CMP AH,0
JE EVEN
LEA DX,B
MOV AH,9
INT 21H
JMP EXIT
EVEN:
LEA DX,A
MOV AH,9
INT 21H 

EXIT:
MAIN ENDP
    END MAIN
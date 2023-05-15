;Task 9: Write a program to check whether a number is divisible by 5 and 11 or not.

.MODEL SMALL
.STACK 100H
.DATA
A db "Divisible by 5 and 11$"
B db "Not Divisible by 5 and 11$"
.CODE
MAIN PROC
    
MOV AX, @DATA
MOV DS, AX
MOV CX, 220
MOV AX, CX
MOV BL, 5
DIV BL
CMP AH, 0
JE YES
JMP EXIT
YES:
MOV AX,CX
MOV BL,11
DIV BL
CMP AH,0
JE BOTH
JMP EXIT
BOTH:
LEA DX,A
MOV AH,9INT 21H
JMP END
EXIT:
LEA DX,B
MOV AH,9
INT 21H

END:
MAIN ENDP
    END MAIN
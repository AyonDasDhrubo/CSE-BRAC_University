;Task 2: Swap two numbers, using a maximum of 3 registers

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX, 5D
MOV BX, 7D
MOV CX, AX
MOV AX, BX
MOV BX, CX

MAIN ENDP
    END MAIN
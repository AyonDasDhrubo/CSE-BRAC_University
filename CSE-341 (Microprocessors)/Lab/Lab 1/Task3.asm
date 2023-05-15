;Task 3: Add two numbers using two registers.

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX, 1D
MOV BX, 7D
ADD AX, BX

MAIN ENDP
    END MAIN
;Task 4: Subtract two numbers using two registers

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX, 7D
MOV BX, 1D
SUB AX, BX

MAIN ENDP
    END MAIN
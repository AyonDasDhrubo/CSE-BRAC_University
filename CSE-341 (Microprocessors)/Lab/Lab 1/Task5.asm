;Task 5: Swap two numbers using ADD/SUB instructions only

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX, 7D
MOV BX, 1D
MOV CX, 0D
ADD CX, AX
SUB AX, AX
ADD AX, BX
SUB BX, BX
ADD BX, CX
SUB CX, CX

MAIN ENDP
    END MAIN
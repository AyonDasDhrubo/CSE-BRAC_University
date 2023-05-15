;Task 1: Take a number in AX, and if it"s a negative number, replace it by 5

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV AX, -5
CMP AX, 0
JL Check ;jl -> destination < source
Check:
MOV AX, 5
MOV AH, 2
MOV DX, AX
ADD DX, 48
INT 21H

MAIN ENDP
    END MAIN
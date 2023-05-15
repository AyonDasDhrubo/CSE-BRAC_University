;Task 4: If AL contains 1 or 3, display “o”; if AL contains 2 or 4 display "e"

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV AL, 1
CMP AL, 1
JE Odd
CMP AL, 3
JE Odd
Odd:
MOV DL, 'o'
JMP Display
Even:
MOV DL, 'e'
Display:
MOV AH, 2
INT 21H

exit:
MAIN ENDP
    END MAIN
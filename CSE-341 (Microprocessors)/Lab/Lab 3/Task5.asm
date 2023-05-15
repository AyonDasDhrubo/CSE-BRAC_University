;Task 5: Read a character, and if it's an uppercase letter, display it.

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV AL, "Z"
CMP AL, 65
JL exit
CMP AL, 90
JG exit
MOV DL, AL
MOV AH, 2
INT 21H

exit:
MAIN ENDP
    END MAIN
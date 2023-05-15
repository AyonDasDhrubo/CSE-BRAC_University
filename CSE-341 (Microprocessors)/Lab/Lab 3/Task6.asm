;Task 6: Read a character. If it's "y" or "Y", display it; otherwise, terminate the program.

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV AH, 1
INT 21H
MOV DL, AL
CMP DL, 89
JE exit
CMP DL, 121
JE exit
exit:
MOV AH, 2
INT 21H

MAIN ENDP
    END MAIN
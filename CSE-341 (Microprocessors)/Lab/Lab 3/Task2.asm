;Task 2: Suppose AL and BL contain extended ASCII characters. Display the one that comes first in the character sequence.

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC

MOV AX,@DATA
MOV DS,AX
MOV AL, 'A'
MOV BL, 'Y'
CMP AL, BL
JMP Level
; AL > BL
MOV AH, 2
MOV DL, BL
INT 21H
Level: ; AL < BL
MOV AH, 2
MOV DL, AL
INT 21H

MAIN ENDP
    END MAIN
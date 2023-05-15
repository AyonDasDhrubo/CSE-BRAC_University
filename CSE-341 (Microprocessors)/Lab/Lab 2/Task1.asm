;Task-1: Take a character input and display it. Display the message "Please insert a character: " when taking an input.

.MODEL SMALL
.STACK 100H
.DATA
A DB "Please insert a character:$"
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
LEA DX, A
MOV AH, 9
INT 21H
;Taking Input
MOV AH, 1
INT 21H
;showing output
MOV AH, 2
MOV DL, AL
INT 21H

MAIN ENDP
    END MAIN
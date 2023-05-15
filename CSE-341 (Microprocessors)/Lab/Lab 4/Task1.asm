;Task 1: Write a count-controlled loop to display a row of 80 stars.
.MODEL SMALL
.STACK 100H
.DATA
A DB "*$"
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV CX,80
function:
LEA DX,A
MOV AH,9
INT 21H
LOOP function

MAIN ENDP
    END MAIN
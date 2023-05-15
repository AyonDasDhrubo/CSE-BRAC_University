;Task: Pushing 10 elements in stack

.MODEL SMALL
.STACK 100H
.DATA
A DW 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
.CODE    
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV CX,10
MOV SI,0
START:
MOV AX,A[SI]
PUSH AX
INC SI
LOOP START

MAIN ENDP
    END MAIN
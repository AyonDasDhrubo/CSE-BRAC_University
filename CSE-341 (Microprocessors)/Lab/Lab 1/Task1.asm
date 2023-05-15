;Task 1: Take input in the register AX and then move it to BX using the MOV instruction

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC

MOV AX, 5D
MOV BX, AX

MAIN ENDP
    END MAIN
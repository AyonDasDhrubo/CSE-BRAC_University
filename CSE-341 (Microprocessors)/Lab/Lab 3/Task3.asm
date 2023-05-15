;Task 3: If AX contains a negative number, put -1 in BX; if AX contains 0, put 0 In BX; if AX contains a positive number, put 1 in BX.

.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
MOV AX,@DATA
MOV DS,AX
MOV AX, -5
CMP AX, 0
JL LevelOne
JE LevelTwo
JG LevelThree
LevelOne:
MOV BX, 1
NEG BX
JMP exit
LevelTwo:
MOV BX, 0
JMP exit
LevelThree:
MOV BX, 1

exit:
MAIN ENDP
    END MAIN
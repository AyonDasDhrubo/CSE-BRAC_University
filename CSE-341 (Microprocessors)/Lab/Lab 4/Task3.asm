;Task 3: Read a five character password and overprint it by executing a carriage return and displaying five X's.

.MODEL SMALL
.STACK 100H
.DATA
M1 DB "VOWEL$"
M2 DB "CONSONANT$"
.CODE
MAIN PROC
    
MOV AH,1
INT 21H
MOV AH,1
INT 21H
MOV AH,1
INT 21H
MOV AH,1
INT 21H
MOV AH,1
INT 21H
MOV AH,2
MOV DL,0DH
INT 21H
MOV CX,5START:
MOV DL,"X"
INT 21H
LOOP START
JMP EXIT

EXIT:
MAIN ENDP
    END MAIN
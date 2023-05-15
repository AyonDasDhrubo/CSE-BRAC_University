;Task: 2(b) Put the sum 100 + 95 + 90 + ... + 5 in AX
.MODEL SMALL
.STACK 100H
;100 + 95 + 90 + ... + 5
.DATA
.CODE
MAIN PROC

MOV AX, 0
MOV BX, 100
MOV CX, 19
loop_segment:
ADD AX, BX
SUB BX, 5
LOOP loop_segment
MOV AH, 4ch
INT 21h

MAIN ENDP
    END MAIN
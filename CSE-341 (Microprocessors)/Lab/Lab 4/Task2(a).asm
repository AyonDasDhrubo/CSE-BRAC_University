;Task: 2(a) Put the sum of 1 + 4 + 7+ .. + 148 in AX
.MODEL SMALL
.STACK 100H
;1 + 4 + 7+ .. + 148
.DATA
.CODE
MAIN PROC
    
MOV AX, 0
MOV BX, 1
MOV CX, 49
loop_segment:
ADD AX, BX
ADD BX, 3
LOOP loop_segment
MOV AH, 4ch
INT 21h

MAIN ENDP
    END MAIN
;Task 8: Write a program to input any alphabet and check whether it is vowel or consonant.

.MODEL SMALL
.STACK 100H
.DATA
A db " is Vowel$"
B db " is Consonant$"
.CODE
MAIN PROC
    
MOV AX, @DATA
MOV DS, AX
MOV ah , 1
INT 21h
CMP al , 'A'
JE printEven
CMP al , 'E'
JE printEven
CMP al , 'I'
JE printEven
CMP al , 'O'
JE printEven
CMP al , 'U'
JE printEven
CMP al , 'a'
JE printEven
CMP al , 'e'
JE printEven
CMP al , 'i'
JE printEven
CMP al , 'o'JE printEven
CMP al , 'u'
JE printEven
LEA DX, B
MOV AH, 9
INT 21h
JMP exit
printEven:
LEA DX, A
MOV AH, 9
INT 21h

exit:
MAIN ENDP
    END MAIN
;Task 3: Take three inputs from the user and find the maximum of the three numbers.

.MODEL SMALL
.STACK 100H
.DATA
array db 3 dup(?)
;variables
y db "Enter Three numbers: $"
z db "Largest Number: $"
.CODE
MAIN PROC
;initialize DS
MOV AX,@DATA
MOV DS,AX
; enter your code here
lea dx,y
mov ah,9
int 21h
;taking input
mov cx,3
mov si,0start:
mov ah,1
int 21h
mov array[si],al
add si,1
loop start
; output
mov ah,2
mov dl,0DH
int 21h
mov dl,0AH
int 21h
lea dx,z
mov ah,9
int 21h
mov cx,3
mov si,0
mov dl,0
second_loop:
cmp array[si],dl
jg execute
jmp skip
execute:
mov dl,array[si]
skip:
add si,1loop second_loop
mov ah,2
int 21h
;exit to DOS
exit:
MAIN ENDP
END MAIN
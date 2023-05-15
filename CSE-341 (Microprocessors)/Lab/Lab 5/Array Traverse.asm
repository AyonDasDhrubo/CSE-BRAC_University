;Array Traverse: Printing all elements

.model small
.stack 100h
.data
a db 1, 2, 3, 4, 5
.code
main proc
    
mov ax, @data
mov ds, ax
mov cx, 5
mov ah, 2
lea si, a
start:
mov dl, [si]
add dl, 30H
int 21H
add si, 1
loop start

main endp
    end main
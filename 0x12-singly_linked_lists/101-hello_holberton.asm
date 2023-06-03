section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, format
    xor eax, eax
    call printf

    ; Print a new line
    mov rdi, newline
    xor eax, eax
    call printf

    ; Exit the program
    xor edi, edi
    mov eax, 60
    syscall


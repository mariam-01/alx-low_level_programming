section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8                 ; Align the stack to 16 bytes
    mov edi, format            ; Load format string address
    xor eax, eax               ; Clear upper 32 bits of rax
    call printf                ; Call printf

    mov edi, newline           ; Load newline string address
    xor eax, eax               ; Clear upper 32 bits of rax
    call printf                ; Call printf

    xor eax, eax               ; Return 0 from main
    add rsp, 8                 ; Restore the stack
    ret



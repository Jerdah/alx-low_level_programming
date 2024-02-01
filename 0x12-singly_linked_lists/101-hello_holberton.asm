extern printf

section .data
    fmt db "%s", 0 ; Format string
    msg db 'Hello, Holberton', 10
    len equ $-msg

section .text
    global main

main:
    ; Prepare arguments for printf
    mov rdi, fmt ; First argument is the format string
    mov rsi, msg ; Second argument is the message
    mov rax, 0   ; Number of floating point parameters

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60 ; System call number for exit
    xor edi, edi ; Exit status
    syscall

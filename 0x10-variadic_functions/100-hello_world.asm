section .text
    global main

section .data
    message db 'Hello, World', 10
    len equ $ - message

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, len
    syscall

    mov rax, 60
    mov rdi, 0
    syscall

section .data
    hello db 'Hello, Holberton',0
    format db '%s', 0

section .text
    extern printf

global _start

_start:

    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    pop rbp
    mov rax, 60
    xor edi, edi
    syscall

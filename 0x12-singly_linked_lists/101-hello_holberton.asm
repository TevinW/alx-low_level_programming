extern printf

section .data
    message: db 'Hello, Holberton',0
    format: db '%s', 0

section .text
    global main

main:

    push rbp
    mov rdi, format
    mov rsi, message
    call printf

    mov rax,0
    ret

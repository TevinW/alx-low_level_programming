section .data
    hello db 'Hello, Holberton',0
    format db '%s', 0

section .text
    global main
    extern printf

main:
    ; Set up the stack frame for the printf call
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax ; Clear rax register to indicate no vector registers used
    call printf

    ; Clean up and exit
    pop rbp
    mov rax, 60         ; syscall: sys_exit
    xor edi, edi        ; status: 0
    syscall

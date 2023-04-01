section .data
    hello db 'Hello, Holberton', 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    
    push qword hello
    call printf
    add rsp, 8 ; remove argument from stack

    push qword newline
    call printf
    add rsp, 8 ; remove argument from stack
    
    mov rsp, rbp
    pop rbp
    
    xor eax, eax ; return 0
    ret


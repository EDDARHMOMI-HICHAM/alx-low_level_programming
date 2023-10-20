section .data
    hello_msg db "Hello, Holberton",10  ; The message to print

section .text
    global main

    extern printf
    global _start

_start:
    push rbp
    mov rdi, hello_msg
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

main:
    ret

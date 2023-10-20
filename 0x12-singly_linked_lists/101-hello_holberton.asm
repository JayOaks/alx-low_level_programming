section .data
    hello db "Hello, Holberton",10,0   ; The string to print, followed by a newline and null terminator

section .text
    global main

extern printf

main:
    ; Prepare the stack for the printf call
    push rbp
    mov rdi, hello          ; Format string
    call printf

    ; Clean up and exit
    pop rbp
    ret

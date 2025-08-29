extern __errno_location

section .text
    global ft_read

ft_read:
    MOV rax, 0
    SYSCALL
    CMP rax, 0
    jl error
    ret

error:
    neg rax
    mov rdi, rax
    call __errno_location
    mov [rax], rdi
    mov rax, -1
    ret
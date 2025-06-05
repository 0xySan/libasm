section .text
    global ft_write

ft_write:
    MOV rax, 1
    SYSCALL
    ret
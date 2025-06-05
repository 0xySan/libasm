section .text
    global ft_read

ft_read:
    MOV rax, 0
    SYSCALL
    ret
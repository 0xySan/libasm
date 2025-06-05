section .text
    global ft_strlen

ft_strlen:
    MOV rax, -1

.loop:
    INC rax
    CMP BYTE [rdi + rax], 0
    JNZ .loop
    ret
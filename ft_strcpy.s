section .text
    global ft_strcpy

ft_strcpy:
    XOR rax, rax

.loop:
    CMP BYTE [rsi + rax], 0
    MOV dl, BYTE [rsi + rax]
    MOV BYTE [rdi + rax], dl
    JZ .done
    INC rax
    JMP .loop

.done:
    MOV rax, rdi
    ret
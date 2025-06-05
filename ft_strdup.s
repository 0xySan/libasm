default rel

section .text
    global ft_strdup
    extern malloc

ft_strlen:
    XOR rax, rax

.lenloop:
    CMP BYTE [rdi + rax], 0
    JZ .lendone
    INC rax
    JMP .lenloop

.lendone:
    ret

ft_strcpy:
    XOR rax, rax

.cpyloop:
    CMP BYTE [rsi + rax], 0
    MOV dl, BYTE [rsi + rax]
    MOV BYTE [rdi + rax], dl
    JZ .cpydone
    INC rax
    JMP .cpyloop

.cpydone:
    MOV rax, rdi
    ret

ft_strdup:
    PUSH rdi 
    CALL ft_strlen
    INC rax
    MOV rdi, rax
    CALL malloc wrt ..plt
    CMP rax, 0
    JZ .malloc_fail
    MOV rdi, rax
    POP rsi
    CALL ft_strcpy
    ret

.malloc_fail:
    XOR rax, rax
    ret
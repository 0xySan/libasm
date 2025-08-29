section .text
    global ft_strdup
    extern malloc
    extern ft_strcpy
    extern ft_strlen

ft_strdup:
    PUSH rdi 
    CALL ft_strlen
    INC rax
    MOV rdi, rax
    CALL malloc
    CMP rax, 0
    JZ .malloc_fail
    MOV rdi, rax
    POP rsi
    CALL ft_strcpy
    ret

.malloc_fail:
    XOR rax, rax
    POP rsi
    ret
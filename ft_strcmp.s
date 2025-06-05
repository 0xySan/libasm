section .text
    global ft_strcmp

ft_strcmp:
    XOR rcx, rcx

.loop:
    MOV al, [rdi + rcx]
    CMP al, [rsi + rcx]
    JNZ .done
    CMP al, 0
    JZ .done
    INC rcx
    JMP .loop

.done:
    XOR rax, rax
    XOR rdx, rdx
    MOV al, BYTE [rdi + rcx]
    MOV dl, BYTE [rsi + rcx]
    SUB rax, rdx
    ret

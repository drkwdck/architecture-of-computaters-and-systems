.data
    printf_format:
        .string "f = %d\nx = 4, y = 32\n"
    x:
        .int 4
    y:
        .int 32
.globl main
    main:
        movl y, %eax
        movl x, %ebx
        xor %edx, %edx
        idiv %ebx

        cmpl $0, %edx
        jne y_mod_x_not_zero
        
        pushl %eax
        pushl $printf_format
        call printf
        jmp end

    y_mod_x_not_zero:
        movl x, %eax
        movl y, %edx
        mul %edx
        pushl %eax
        pushl $printf_format
        call printf
    end:
        addl $8, %esp
        movl $0, %eax
        movl $0, %edx
        ret

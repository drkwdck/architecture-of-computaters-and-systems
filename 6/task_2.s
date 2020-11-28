.data
    printf_format:
        .string "y = %f\nx = 12\n"
    x:
        .double 12
    y:
        .double 0
    a:
        .double 1
    b:
        .double -13
    c:
        .double 3
.globl main
    main:
        fldl x
        fldl b
        fadd
        ftst
        fstsw %ax
        sahf
        jbe less_than_13

        fldl c
        fldl x
        fdiv
        fldl a
        fsub

        jmp end
        less_than_13:
        fldl x
        fldl a
        fadd
        end:
        fstpl (y)
        pushl (y+4)
        pushl (y)
        push $printf_format
        call printf
        add $12, %esp
        ret
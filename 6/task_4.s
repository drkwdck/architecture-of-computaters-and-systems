.data
    output:
        .string "S = %f\n"
    epsilon:
        .double 0.2
    i:
        .double 1
    S:
        .double -1
    a:
        .double -1
    one:
        .double 1
    sign:
        .double -1
.globl main
    main:
        start:
        fldl one
        fldl i
        fadd
        fstpl (i)

        fldl sign
        fchs
        fstpl (sign)

        fldl i
        fldl sign
        fdiv
        fstpl (a)

        fldl a
        fabs
        fldl epsilon
        fabs
        fsubr
        ftst
        fstsw %ax
        sahf
        jbe end

        fldl S
        fldl a
        fadd
        fstpl (S)
        jmp start

        end:
        pushl (S+4)
        pushl (S)
        push $output
        call printf
        add $12, %esp
        ret
.data
    input: 
        .string "%d"
    output:
        .string "a(%d)=%d\n"
    input_N_message:
        .string "Enter N: "
    input_x_message:
        .string "Enter x: "
    x:
        .int 0
    N:
        .int 0
    i:
        .int -1
    sequence:
        .int 0
.globl main
    main:
        pushl %ebp
        movl %esp, %ebp
        subl $40, %esp
        movl $input_x_message, (%esp)
        call printf
        leal 36(%esp), %eax
        movl %eax, 4(%esp)
        movl $input, (%esp)
        call scanf
        movl -4(%ebp), %eax
        movl %eax, x
        movl %ebp, %esp
        popl %ebp
        pushl %ebp
        movl %esp, %ebp
        subl $40, %esp
        movl $input_N_message, (%esp)
        call printf
        leal 36(%esp), %eax
        movl %eax, 4(%esp)
        movl $input, (%esp)
        call scanf
        movl -4(%ebp), %eax
        movl %eax, N
        movl %ebp, %esp
        popl %ebp
    start_step:
        cmpl $0,N
        je end_loop
        addl $-1, N
        addl $1, i
    end_step:
        push sequence
        push sequence
        push i
        push $output
        call printf
        addl $16, %esp
        movl x, %eax
        addl %eax, sequence
        jmp start_step
    end_loop:
        ret
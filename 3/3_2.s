.data
printf_format:
    .string "%d\n"
.globl main
main:
    movl $13, %eax
    sar $1, %eax
    add $1, %eax
    pushl %eax
    pushl $printf_format
    call printf
    addl $8, %esp
    movl $0, %eax
    ret
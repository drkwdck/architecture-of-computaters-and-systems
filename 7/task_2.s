.data
output_format:
    .string "Сумма элементов массива: %d\n"
array:
    .int 1, 2, 3, 4, 5, 6, 9
array_end:
    .globl main
main:
    movl array, %eax
    movl $array+4, %ebx
    jmp checkForEnd
action:
    add (%ebx), %eax
    addl $4, %ebx
checkForEnd:
    cmpl $array_end, %ebx
    jne action
    pushl %eax
    pushl $output_format
    call printf
    addl $8, %esp
    movl $0, %eax
ret
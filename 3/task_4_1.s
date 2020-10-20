.data
a: .int 6
b: .int 3
str: .string "a = 3 b = 6 \nx= %d y= %d\n"
.global main
main:
pushl a
pushl b
call additional_fun
add $2*4, %esp
push %ecx
push %eax
push $str
call printf
add $3*4, %esp
xor %eax, %eax
xor %ecx, %ecx
ret
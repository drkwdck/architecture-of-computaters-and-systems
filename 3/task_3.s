.data
    str: .string "Random number from 1 to 10 = %d\n"
    From: .int 1
    To: .int 10
.global main
main:
    pushl To
    pushl From
    call GetRand
    pushl %eax
    pushl $str
    call printf
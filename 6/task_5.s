.data
    output:
        .string 5 * 4 = %f\n
    X:
        .int 1
    Y:
        .int -1
.globl main
    main:
        xor %eax,%eax
        mov $0x10,%ecx  
    a0: 
        cmp $0,X
        jz a3
        shr $1,X
        jnc a2
        add Y,%eax
    a2: 
        add %[Y],%[Y]
        loop a0 
    a3:
        movl %eax, %[R]

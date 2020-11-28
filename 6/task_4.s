.data
    output:
        .string "S = %d\n"
    epsilon:
        .double 0.001
    i:
        .double 1
    S:
        .double 0
    a:
        .double -1
.globl main
    main:
        fldl 
    start:
        jle end
    end:

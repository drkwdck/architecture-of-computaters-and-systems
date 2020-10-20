.global func
func:
    mov 4(%esp), %eax
    sar $1, %eax
    add $1, %eax
ret


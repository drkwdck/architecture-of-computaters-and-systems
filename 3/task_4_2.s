.global additional_fun
additional_fun:
mov 4(%esp), %ebx
mov 8(%esp), %eax
mov %eax, %ecx
imul %ebx, %ecx 
imul %eax, %eax 
imul %ebx, %ebx 
sal %ecx 
sub %ebx, %eax 
ret
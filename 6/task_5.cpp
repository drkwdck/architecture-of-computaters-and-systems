#include "stdio.h"

int main()
{
    int x = 7, y = -4;
    int result;
    int immutable_x = x; 
    int immutable_y = y; 

    asm (
        "xor %%eax,%%eax\n"
        "mov $0x10,%%ecx \n"
        "a0: \n"
        "cmp $0,%[X] \n"
        "jz a3 \n"
        "shr $1,%[X] \n"
        "jnc a2 \n"
        "add %[Y],%%eax \n"
        "a2: \n"
        "add %[Y],%[Y] \n"
        "jnz a0 \n"
        "dec %%eax\n"
        "a3:\n"
        "movl %%eax, %[result]\n"
        : [result]"=m" (result),[X]"+r" (x),[Y]"+r"(y) :: "cc","%ecx","%eax"
    );

    printf("%d * %d = %d\n", immutable_x, immutable_y, result);
    return 0;
}
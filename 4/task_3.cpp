#include <stdio.h>

int main()
{
    // y = 1 + x / 2
    int y = 2;
    int x = y;

    asm("sar $1, %[y]" :[y]"+r"(y));
    asm("add $1, %0" : [y]"+r"(y));

    printf("1 + %d / 2 = %d\n", x, y);
}
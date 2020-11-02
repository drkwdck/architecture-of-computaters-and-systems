#include <stdio.h>

int main()
{
    // y = 1 + x / 2
    int x = 6;
    int y;

    asm("sar $1, %0" : "=r" (y) : "0" (x));
    asm("add $1, %0" : "=r" (y) : "0" (y));

    printf("1 + %d / 2 = %d\n", x, y);
}
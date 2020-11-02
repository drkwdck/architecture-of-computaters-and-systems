// https://ru.wikipedia.org/wiki/GCC_Inline_Assembly

#include <stdio.h>


void Add(int x)
{
    bool result = false;

    printf("value = %d\n", x);
    
    asm ( "add $1, %0\n" : "=r" (x) : "0" (x) );

    // Jump if not overflow  (jno)
    asm ( "jno notoverflow;"\
    "mov $0x1,%0;"\
    "notoverflow :"\
    : "=r" (result) : "0" (result) );
    
    printf("value + 1 = %d\n", x);
    
    
    if (result == true)
    {
        printf("Результат неверный\n");
    }
    else
    {
        printf("Результат верный\n");
    }
}

int main(void)
{
    // int max value
    int max_int = 2147483647;
    int some_number = -5;

    Add(max_int);

    printf("\n");
    Add(some_number);
    
    return 0;
}

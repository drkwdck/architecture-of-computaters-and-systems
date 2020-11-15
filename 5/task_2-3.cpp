#include <stdio.h>
#include "math.h"

// cos(x) / (sin(2x) + 1.5)

double calc(double x)
{
    return cos(x) / (sin(2*x) + 1.5);
}

int main()
{
    double c = 1.5;
    double x = M_PI / 4, y;

    asm(
        "fldl %[x]\n"
        "fcos\n"

        "fldl %[c]\n" 
        "fldl %[x]\n"
        "fldl %[x]\n"

        "fadd\n"
        "fsin\n"
        "fadd\n"
        "fdivr\n"

        "fstpl %[y]\n"
        :[y]"=m"(y)
        :[x]"m"(x), [c]"m"(c)
    );

    printf("From asm: %f\n",y);
    printf("From C++: %f\n", calc(x));
}
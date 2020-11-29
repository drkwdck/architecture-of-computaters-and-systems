#include "stdio.h"
#include <cmath>

int main()
{
    double epsilon = 0.2;
    double a = 1;
    double S = 0;
    double i = 0;

    while (abs(a) >= abs(epsilon))
    {
        ++i;
        a = (int)i % 2 == 0 ? 1 / i : -1 / i;
    printf("%f", a);
        S += a;
    }
    
    printf("%f", S);

    return 0;
}
#include "stdio.h"
#include <cmath>

int main()
{
    double epsilon = 0.2;
    double a = 0;
    double S = 0;
    double i = 0;

    while (true)
    {
        ++i;
        a = pow(-1.0, i) / i;
        if ((a < 0 ? a * (-1) : a) <= epsilon) { break; }
        S += a;
    }

    printf("S = %f\n", S);

    return 0;
}
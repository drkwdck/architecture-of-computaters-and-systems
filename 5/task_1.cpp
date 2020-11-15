#include "stdio.h"
#include "math.h"

template<typename T> 
T GetFirstSum(T n)
{
    T result = 0;

    for (int i = 0; i < n; ++i)
    {
        result += 1 / n;
    }

    return result;
}
template<typename T> 
T GetSecondSum(T n)
{
    T result = 0;

    for (int i = 0; i < 2 * n; ++i)
    {
        result += 1 / n;
    }

    return result;
}

int main()
{
    printf("For float:\n");
    float N = 0;

    N = pow((float)10, (float)2);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));

    N = pow((float)10, (float)4);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));

    N = pow((float)10, (float)6);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));

    N = pow((float)10, (float)7);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));

    N = pow((float)10, (float)8);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));

    N = pow((float)10, (float)9);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<float>(N), GetSecondSum<float>(N));
    
    
    printf("For double:\n");
    double doubleN = 0;

    doubleN = pow((double)10, (double)2);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

    doubleN = pow((double)10, (double)4);
    printf("N = %e, S1 = %f, S2 = %f\n",N , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

    doubleN = pow((double)10, (double)6);
    printf("N = %e, S1 = %f, S2 = %f\n",doubleN , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

    doubleN = pow((double)10, (double)7);
    printf("N = %e, S1 = %f, S2 = %f\n",doubleN , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

    doubleN = pow((double)10, (double)8);
    printf("N = %e, S1 = %f, S2 = %f\n",doubleN , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

    doubleN = pow((double)10, (double)9);
    printf("N = %e, S1 = %f, S2 = %f\n",doubleN , GetFirstSum<double>(doubleN), GetSecondSum<double>(doubleN));

}
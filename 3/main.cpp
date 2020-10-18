#include <string>
using namespace std;

extern "C" int func(int x);

int main()
{
        for (int i = 0; i < 10; i++)
        {
                printf("x = %d y(x) = %d ",i, func(i));
                printf("\n");
        }

        return 0;
}
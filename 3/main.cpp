#include <string>
using namespace std;

extern "C" int func(int x);

int main()
{
        for (int i = 0; i > -10; i--)
        {
                printf("%d ",func(i));
        }

        return 0;
}
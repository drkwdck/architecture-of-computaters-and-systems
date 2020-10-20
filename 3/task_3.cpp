#include <cstdlib>
#include <ctime>

extern "C" int GetRand(int from, int to)
{
    srand(time(0));
    return std::rand() % (to - from) + from;
}
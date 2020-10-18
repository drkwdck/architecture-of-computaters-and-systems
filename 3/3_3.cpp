#include <cstdlib>

extern "C" int GetRand(int from, int to)
{
    srand(0);
    return std::rand() % (to - from) + from;
}
#include <iostream>
#include <cstddef>

int main()
{
    // 7
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;
    std::cout << "wchar_t: " << sizeof(wchar_t) << std::endl;
    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "long long: " << sizeof(long long) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "long double: " << sizeof(long double) << std::endl;
    std::cout << "size_t: " << sizeof(size_t) << std::endl;
    std::cout << "ptrdiff_t: " << sizeof(ptrdiff_t) << std::endl;
    std::cout << "void*: " << sizeof(void*) << std::endl;

    return 0;
}
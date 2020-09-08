#include <iostream>
#include <bitset>

void print_four_chars(char some_str[4])
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << some_str[i] << ": " << (int)some_str[i] << std::endl;
    }
}


int main()
{
    // 6
    int32_t x = 0x12345678;;
    std::bitset<32> x_bin(x);

    std::cout << std::dec << x << std::endl;
    std::cout << x_bin;

    char eng_string[4] = {'a', 'b', 'c', 'd'};
    char rus_string[4] = {'а', 'б', 'в', 'г'};

    return 0;
}
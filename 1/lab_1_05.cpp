#include <iostream>
#include <bitset>

void print_four_chars(char some_str[])
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
    std::cout << x_bin << std::endl;

    char eng_string[] = "abcd";
    char rus_string[] = "абвг";

    

    for (int i = 0; i < 8; i++)
    {
        std::cout << (int)rus_string[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)eng_string[i] << " ";
    }

    std::cout << std::endl;

    wchar_t expanded_eng_string[] = L"abcd";
    wchar_t expanded_rus_string[] = L"абвг";

    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)expanded_eng_string[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)expanded_rus_string[i] << " ";
    }

    return 0;
}
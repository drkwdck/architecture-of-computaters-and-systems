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
    std::cout <<"Задание 6. Определите и выпишите в отчёт, как хранятся в памяти компьютера:\n";
    std::cout <<"– целое число 0x12345678; по результату исследования определите порядок\n";
    std::cout <<"следования байтов в словах для вашего процессора:\n";
    std::cout <<"– Little-Endian (от младшего к старшему, порядок Intel)\n";
    std::cout <<"– Big-Endian (от старшего к младшему, порядок Motorola)\n";
    std::cout <<"– строки 'abcd' и 'абвг' (массив из char);\n";
    std::cout <<"– «широкие» строки L'abcd' и L'абвг' (массив из wchar_t).\n\n";
    // 6
    int32_t x = 0x12345678;;
    std::bitset<32> x_bin(x);

    std::cout << "0x12345678\n";
    std::cout << "dec: "<< std::dec << x << std::endl;
    std::cout << "binary: "<< x_bin << std::endl;

    char eng_string[] = "abcd";
    char rus_string[] = "абвг";

    std::cout << "\n abcd:\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << (int)rus_string[i] << " ";
    }


    std::cout << "\nабвг\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)eng_string[i] << " ";
    }

    std::cout << std::endl;

    wchar_t expanded_eng_string[] = L"abcd";
    wchar_t expanded_rus_string[] = L"абвг";

    std::cout << "\nL\"abcd\"\n";

    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)expanded_eng_string[i] << " ";
    }

    std::cout << "\nL\"абвг\"";

    for (int i = 0; i < 4; i++)
    {
        std::cout << (int)expanded_rus_string[i] << " ";
    }

    return 0;
}
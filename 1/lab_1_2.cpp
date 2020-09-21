#include <iostream>
#include <cstddef>
#include <string>

template<typename T>
void print_size(std::string type_name)
{
    std::cout << type_name <<": " << sizeof(T) << std::endl;
}

int main()
{
    std::cout << "Задание 7. При помощи оператора sizeof выясните, сколько байтов\n";
    std::cout << "занимают переменные следующих типов: char, bool, wchar_t, short, int,\n";
    std::cout << "long, long long, float, double, long double, size_t, ptrdiff_t,\n";
    std::cout << "void*. Результаты оформите в отчёте в виде таблицы, указывая для каждого типа\n";
    std::cout << "его назначение.\n";
    std::cout << "Для выполнения единообразных действий над переменными различных типов\n";
    std::cout << "используются макросы препроцессора C или шаблоны C++.\n";
    std::cout << "Проверьте, соответствуют ли размеры типов современному стандарту C++.\n\n";
    print_size<char>("char");
    print_size<bool>("bool");
    print_size<wchar_t>("wchar_t");
    print_size<short>("short");
    print_size<int>("int");
    print_size<long>("long");
    print_size<long long>("long long");
    print_size<float>("float");
    print_size<double>("double");
    print_size<long double>("long double");
    print_size<size_t>("size_t");
    print_size<ptrdiff_t>("ptrdiff_t");
    print_size<void*>("void*");

    return 0;
}
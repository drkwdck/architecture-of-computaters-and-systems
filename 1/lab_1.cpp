#include <iostream>
#include "stdint.h"
#include "math.h"
#include <bitset>
#include <limits>


template<typename T>
void print(T x)
{
	std::bitset<16> xBin(x);
	std::bitset<16> xBinUnsigned((unsigned int)x);

	std::cout << std::dec << "dec: " << x  << " hex: " << std::hex  << x << " binary: " << xBin << std::endl;
    std::cout << "UNSIGNED\n";
	std::cout << std::dec << "dec: " << (uint16_t)x << " hex: " << std::hex << x << " binary: " << xBinUnsigned << std::endl << std::endl;

}

template<typename T>
void print_hex_dec(T x)
{
	std::cout << "hex: " << std::hex << x << " dec: " << std::dec << x << std::endl;
}

int main()
{	
    // 1
	std::cout <<"_________________________________________________________________________________\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"Задание 1. Изучите, как интерпретируется одна и та же область памяти, если\n";
	std::cout <<"она рассматривается как знаковое или беззнаковое число, а также как одно и то\n";
	std::cout <<"же число записывается в различных системах счисления.\n";
	std::cout <<"Необходимо сравнить:\n";
	std::cout <<"а) беззнаковую интерпретацию переменной в шестнадцатеричной форме;\n";
	std::cout <<"б) беззнаковую интерпретацию в десятичной форме;\n";
	std::cout <<"в) знаковую интерпретацию в десятичной форме.\n";
	std::cout <<"Для этого определите и запишите в отчёт десятичное, двоичное (16 бит) и \n";
	std::cout <<"шестнадцатеричное представления шестнадцатибитных чисел 𝑥 и 𝑦,\n";
	std::cout <<"а также беззнаковую интерпретацию этого представления в десятичном виде.\n\n";

	int16_t x = -2;
	int16_t y = pow(2, 14) + 1;
	
	std::cout << "X = -2:\n";
	print(x);
	std::cout << "y = 2^14+1\n";
	print(y);
	
	// 2
	std::cout <<"_________________________________________________________________________________\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"Задание 2. Найдите и выпишите в отчёт минимальное и максимальное 16-\n";
    std::cout <<"битное число со знаком и без знака в формах представления (а), (б), (в) и в двоичной\n";
    std::cout <<"форме (4 числа, каждое из которых представлено в 4 формах).\n\n";
	
	//std::cout << "2" << std::endl;

    int16_t min = std::numeric_limits<int16_t>::min();
    int16_t max = std::numeric_limits<int16_t>::max();
    uint16_t u_min = std::numeric_limits<uint16_t>::min();
    uint16_t u_max = std::numeric_limits<uint16_t>::max();
    
    std::cout << "for max 16-bit signed value\n";
    print(max);
	std::cout << "for min 16-bit signed value\n";
	print(min);
    std::cout << "for max 16-bit unsigned value\n";
    print(u_max);
	std::cout << "for min 16-bit unsigned value\n";
	print(u_min);
    
	// 3
	std::cout <<"_________________________________________________________________________________\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"Задание 3. Разработайте программу на языке C++, выполняющую над беззнаковыми \n";
	std::cout <<"шестнадцатибитными целыми числами следующие поразрядные операции\n";
    std::cout <<"(результат должен печататься в десятичной и шестнадцатеричной формах):\n";
    std::cout <<"– бинарные 𝑥 ∧ 𝑦 (конъюнкция), 𝑥 ∨ 𝑦 (дизъюнкция),\n";
    std::cout <<"𝑥 ⊕ 𝑦 (сложение по модулю два);\n";
    std::cout <<"– унарные ¬𝑥 (отрицание),\n";
    std::cout <<"neg(𝑥) (дополнение до двух, 𝑥 + neg(𝑥) = 2^(разрядность 𝑥)),\n";
    std::cout <<"– 𝑥 ≪ 𝑦 (логический сдвиг влево), 𝑥 ≫ 𝑦 (логический сдвиг вправо).,\n\n";
	
	
	//std::cout << "\n3\n";

	uint16_t x_unsigned = 0x9211;
	uint16_t y_unsigned = 0x0004;

	std::cout << "disjunction\n";
	print_hex_dec(x_unsigned|y_unsigned);
	std::cout << "\nconjunction\n";
	print_hex_dec(x_unsigned&y_unsigned);
	std::cout << "\nxor\n";
	print_hex_dec(x_unsigned^y_unsigned);
	std::cout << "\nx = 0x9211 negation\n";
	print_hex_dec(~x_unsigned);
	std::cout << "\ny = 0x0004 negation\n";
	print_hex_dec(~y_unsigned);
	std::cout << "\nleft shift: 0x9211 << 0x0004\n";
	print_hex_dec(x_unsigned << y_unsigned);
	std::cout << "\nright shift: 0x9211 >> 0x0004\n";
	print_hex_dec(x_unsigned >> y_unsigned);

	// 4
	std::cout <<"_________________________________________________________________________________\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"                                                                                 |\n";
	std::cout <<"Задание 4. Измените в программе из задания 3 тип переменных на знаковый.\n";
	std::cout <<"Объясните изменение (или неизменность) результата.\n\n";
	
	//std::cout << "\n4\n";

	int16_t x_signed = 	0x9211;
	int16_t y_signed = 0x0004;

	std::cout << "disjunction\n";
	print_hex_dec(x_signed|y_signed);
	std::cout << "\nconjunction\n";
	print_hex_dec(x_signed&y_signed);
	std::cout << "\nxor\n";
	print_hex_dec(x_signed^y_signed);
	std::cout << "\nx = 0x9211 negation\n";
	print_hex_dec(~x_signed);
	std::cout << "\ny = 0x0004 negation\n";
	print_hex_dec(~y_signed);
	std::cout << "\nleft shift: 0x9211 << 0x0004\n";
	print_hex_dec(x_signed << y_signed);
	std::cout << "\nright shift: 0x9211 >> 0x0004\n";
	print_hex_dec(x_signed >> y_signed);

	// 5
	std::cout <<"_________________________________________________________________________________\n";
	std::cout <<"                                                                                 |\n";	
	std::cout <<"                                                                                 |\n";
	std::cout <<"Задание 5. Бонус (+1 балл). Разработайте программу на языке C++ \n";
	std::cout <<"(или дополните программу из задания 3), которая расширяет шестнадцатибитное\n";
	std::cout <<"представление числа x до тридцатидвухбитного, рассматривая числа как\n";
    std::cout <<"– знаковые (signed);\n";
    std::cout <<"– беззнаковые (unsigned).\n\n";

	//std::cout << "\n5\n";
	int16_t x_closed = 0xFF00;
	int32_t x_expanded = x_closed;
	std::cout << "0xFF00 in 16 bt\n";
	print_hex_dec(x_closed);
	std::cout << "0xFF00 in 32 bt\n";
	print_hex_dec(x_expanded);

	uint16_t x_closed_unsigned = 0xFF00;
	uint32_t x_expanded_unsigned = 0xFF00;
	std::cout << "unsigned 0xFF00 in 16 bt\n";
	print_hex_dec(x_closed_unsigned);
	std::cout << "unsigned 0xFF00 in 32 bt\n";
	print_hex_dec(x_expanded_unsigned);

	return 0;
}
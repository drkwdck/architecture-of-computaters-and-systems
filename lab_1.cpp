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
	int16_t x = -2;
	int16_t y = pow(2, 14) + 1;
	
	std::cout << "X = -2:\n";
	print(x);
	std::cout << "y = 2^14+1\n";
	print(y);

    // 2
    
	std::cout << "2" << std::endl;

    int16_t min = std::numeric_limits<int16_t>::min();
    int16_t max = std::numeric_limits<int16_t>::max();
    
    std::cout << "for max 16-bit signed value\n";
    print(max);
	std::cout << "for min 16-bit signed value\n";
	print(min);
    
	// 3
	std::cout << "\n3\n";

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
	std::cout << "\n4\n";

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

	return 0;
}
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

int main()
{
	int16_t x = -2;
	int16_t y = pow(2, 14) + 1;
	
	std::cout << "X = -2:\n";
	print(x);
	std::cout << "y = 2^14+1\n";
	print(y);

    // 2
    
    int16_t min = std::numeric_limits<int16_t>::min();
    int16_t max = std::numeric_limits<int16_t>::max();
    
    std::cout << "for max 16-bit signed value\n";
    print(max);
	std::cout << "for min 16-bit signed value\n";
	print(min);
    
	return 0;
}
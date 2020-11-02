#include <stdio.h>

// Первый пункт
void ASCIIToNumber(unsigned int ascii_number)
{
    unsigned int result;

    asm ( "and $0x0F, %0" : "=r" (result) : "0" (ascii_number));
    printf("0x%X ASCII is %u\n", ascii_number, result);
}

// Второй пункт
void NumberToASCII(unsigned int number)
{
    unsigned int result;

    asm ( "xor $0x30, %0" : "=r" (result) : "0" (number));
    printf("%u is ASCII 0x%X \n", number, result);
}

// Третий пункт
void ToLower(unsigned int symbol)
{
    unsigned int result;

    asm ( "xor $0x20, %0" : "=r" (result) : "0" (symbol));
    printf("%c to lower is: %c \n", symbol, result);
}

int main()
{
    ASCIIToNumber(0x30);
    ASCIIToNumber(0x31);
    ASCIIToNumber(0x34);
    
    printf("\n");

    NumberToASCII(0);
    NumberToASCII(2);
    NumberToASCII(1);

    printf("\n");

    ToLower('A');
    ToLower('D');
    ToLower('E');

    return 0;
}
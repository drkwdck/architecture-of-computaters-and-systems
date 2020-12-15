#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i = 10; 
    int ai = 0;
    int x = 1;
    std:: cout << "Enter N\n";
    std::cin >> i;
    std::cout << "Enter x\n";
    std::cin >> x;
    srand(22);
    int N = i;
    int * array = new int [N];

    for (int i = 0; i < N; ++i)
    {
        array[i] = 0;
    }

    std::cout << std::endl;

    asm(
    "movl $0, %%ebx\n\t"
    "begin: \n"
    "cmpl %[i], %%ebx\n\t"
    "jz end\n"
    "movl %[ai],%%eax\n"
    "addl %[x],%%eax\n"
    "movl %%eax, %[ai]\n"
    "movl %[array], %%ecx\n\t"
    "movl %%eax,(%%ecx, %%ebx, 4)\n\t"
    "incl %%ebx\n\t"
    "jmp begin\n"
    "end: \n"
    :[ai]"+r"(ai),[x]"+r"(x),[i]"+r"(i)
    :[array]"m"(array)
    :"cc","%eax","%ecx","%ebx"
    );
    
    for (int i = 0; i < N; ++i)
    {
        std::cout << " " << array[i];
    }

    std::cout << "\n";

    return 0;
}
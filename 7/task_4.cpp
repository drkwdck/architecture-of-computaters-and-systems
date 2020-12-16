#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct KeyValuePair
{
    int key;
    int value;
};

int main()
{
    srand(13);
    int N = 10;
    struct KeyValuePair * array = new struct KeyValuePair[N];

    for (int i = 0 ; i < N ; ++i)
    {
        array[i].key=rand()%4+1;
        array[i].value=rand()%(40)+1;
        printf("Key = %d, Value = %d\n",array[i].key,array[i].value);
    }

    int key = 1;
    int sum = 0;
    asm (
        "movl $1, %%eax\n\t"
        "movl $0, %%ebx\n\t"
        "movl $0, %%eax\n\t"
        "Start:\n\t"
        "cmpl %[N], %%eax\n\t"
        "je Exit\n\t"
        "movl %[intArray], %%ecx\n\t"
        "leal (%%ecx, %%eax, 8), %%ecx\n\t"
        "movl (%%ecx),%%ecx\n\t"
        "cmpl %[key],%%ecx\n\t"
        "jne isOurKey\n\t"
        "movl %[intArray], %%ecx\n\t"
        "leal 4(%%ecx, %%eax, 8), %%ecx\n\t"
        "movl (%%ecx),%%ecx\n\t"
        "addl %%ecx, %%ebx\n\t"
        "isOurKey: \n\t"
        "incl %%eax\n\t"
        "jmp Start\n\t"
        "Exit:\n\t"
        "movl %%ebx, %[sum]\n\t"
        : [sum]"+m" (sum)
        : [intArray]"m" (array), [N]"m"(N),[key]"m"(key)
        : "cc","%eax","%ebx","%ecx"
    );

    if (sum == 0)
    {
        std::cout << "array does not contain elements with key: " << key << " or sum is 0" << std::endl;
    }
    else
    {
        std::cout << "sum of array elemnts with key "<< key << " = " << sum << std::endl;
    }

    delete [] array;
    return 0;
}
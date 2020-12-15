#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(87);
    int N = 10;
    int * array = new int[N];
    std::cout << "Size of array element = "<< sizeof(array[0]) << std::endl;
    std::cout << "Array elemnts: ";

    for (int i = 0; i < N; ++i)
    {
        array[i] = rand() % N;
        std::cout << " " << array[i];
    }

    std::cout << "\nArray elements positions: ";

    for (int i = 0; i < N; ++i)
    {
        std::cout << " " << &(array[i]); 
    }


    std::cout << "\n";
    delete [] array;
    return 0;
}
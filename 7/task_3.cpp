#include <iostream>
#include "stdlib.h"

struct Foo
{
    int key;
    double value;
};

int main()
{
    srand(10);
    int N = 10;
    struct Foo * array = new struct Foo[N];

    for (int i=0 ; i<N ; i++)
    {
        array[i].key=rand()%(N/2);
        array[i].value=(rand()%1000)/(double)100;
        printf("{ key = %d, value = %.f, address =  %#010x} \n",array[i].key ,array[i].value, &(array[i]));
    }

    printf("\nsize: \n struct instance: %d\n key (int): %d\n val (double): %d\n",sizeof(array[0]),sizeof(array[0].key),sizeof(array[0].value));

    delete [] array;
    return 0;
}
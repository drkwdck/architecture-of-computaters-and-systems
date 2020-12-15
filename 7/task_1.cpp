#include <iostream> 
#include <ctime> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
using namespace std; 
int main() 
{ 
    srand(time(0)); 
    int N = 0; 
    cout  << "Enter array size:\n"; 
    cin»N; 
    int * intArray = new int [N]; 
    cout << "Size of one element:" << sizeof(intArray[0]); 
    cout << "\nRandom int array:" << endl;
 
    for(int i=0;i<N;i++) 
    { 
        intArray[i] = rand() % N; 
        cout << " " << intArray[i];   
    } 
    cout << "\n"; delete [] intArray; 
    return 0; 
}

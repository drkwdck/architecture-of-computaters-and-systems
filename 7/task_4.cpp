#include <iostream> 
#include <ctime> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
using namespace std; 
struct doubleArray 
{ 
int key; 
double value; 
}; 
int main() 
{ 
srand(time(0)); 
int N; 
cout << "Enter size of structs N:" << endl; 
cin >> N; 
struct doubleArray * Array=new struct doubleArray[N] ; 
for (int i=0;i<N;i++) 
{ 
Array[i].key=rand()%(N/2); 
Array[i].value=(rand()%1000)/(double)100; 
cout << "{ "<< Array[i].key << " = " << Array[i].value << " } \n"; 
} 
cout << "\nSizeof(Array[i]):" << sizeof(Array[0]) << "\n"; 
cout << "\nSizeof(Array[i].key):" << sizeof(Array[0].key) << endl; 
cout << "\nSizeof(Array[i].value):" << sizeof(Array[0].value) << endl; 
cout << "key adress:" << &Array[0].key << " value adress:" << &Array[0].value; 
cout << "\nEnter key:\n"; 
int key = 0; 
cin >> key; 
double Min=-1; 
asm ( 
"push %%eax\n\t" 
"push %%ebx\n\t" 
"push %%ecx\n\t" 
"movl $0, %%eax\n\t" 
"Start:\n\t" 
"cmpl %[N], %%eax\n\t" 
"je ExitNM\n\t" 
"movl %[Array], %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"movl (%%ecx),%%ecx\n\t" 
"cmpl %[Key], %%ecx\n\t" 
"je lable\n\t" 
"incl %%eax\n\t" 
"jmp Start\n\t" 
"lable:\n\t" 
"movl %[Array], %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"leal 8(%%ecx, %%eax, 8), %%ecx\n\t" 
"fldl (%%ecx)\n\t" 
"incl %%eax\n\t" 
//-----------------------— 
"StartSum:\n\t" 
"cmpl %[N], %%eax\n\t" 
"je ExitHM\n\t" 
"movl %[Array], %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"movl (%%ecx),%%ecx\n\t" 
"cmpl %[Key], %%ecx\n\t" 
"jne CONTINUESEARCH\n\t"\ 
"movl %[Array], %%ecx\n\t" 
"leal (%%ecx, %%eax, 8), %%ecx\n\t" 
"leal 8(%%ecx, %%eax, 8), %%ecx\n\t" 
"fldl (%%ecx)\n\t" 
"push %%ax\n\t"
"fcom\n\t" 
"fnstsw\n\t" 
"sahf\n\t" 
"pop %%ax\n\t" 
"jc CHANGEMIN\n\t" 
"fstpl %[Min]\n\t" 
"jmp CONTINUESEARCH\n\t" 
"CHANGEMIN:\n\t" 
"fxch\n\t" 
"fstpl %[Min]\n\t" 
"CONTINUESEARCH:\n\t" 
"incl %%eax\n\t" 
"jmp StartSum\n\t" 
"ExitHM:\n\t" 
"fstpl %[Min]\n\t" 
"ExitNM:\n\t" 
"pop %%ecx\n\t" 
"pop %%ebx\n\t" 
"pop %%eax\n\t" 
: [Min]"+m" (Min) 
: [Array]"m"(Array), [N]"m"(N), [Key]"m"(key) 
: "cc" 
); 
if(Min==-1) 
cout << "\nNo key = " << key << " elements\n"; 
else 
cout << "\nMinimum:" << Min << endl; 
delete [] Array; 
return 0; 
}
#include <iostream>
#include<conio.h>
using namespace std;
int main() {
   int a;
   int *ptrr;
   a = 10;
   ptrr = &a;
   (*ptrr)++; 
   cout << "Increment Value of A = " << a;
   ++(*ptrr); 
   cout << "\nIncrement Value of A = " << a;
   (*ptrr)--; 
   cout << "\nDecrement Value of A = " << a;
   --(*ptrr); 
   cout << "\nDecrement Value of A = " << a;
   return 0;
}

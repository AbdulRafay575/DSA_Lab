#include <iostream>
#include<conio.h>
using namespace std;
int main() {
   float a;
   float *pt;
   a = 564.01;
   pt = &a;
   (*pt)++; 
   cout << "Increment Value of A = " << a;
   ++(*pt); 
   cout << "Increment Value of A = " << a;
   (*pt)--; 
   cout << "Decrement Value of A = " << a;
   --(*pt);
   cout << "Decrement Value of A = " << a;
   return 0;
}

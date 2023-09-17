#include <iostream>
#include<conio.h>
using namespace std;
int main() {
   int *p1, *p2;
   int num1, num2, d;
   cout << "\nEnter Two Numbers for Find a Difference : \n";
   cin>>num1;
   cin>>num2;
   p1 = &num1;
   p2 = &num2;
   d = *p1 - *p2;
   cout << "Difference :" << d;
   return 0;
}

#include <iostream>
#include<conio.h>

using namespace std;

int main() {

   int a;
   int *pt;
   a = 560;
   pt = &a;
   cout << "a:Value of A = " << a;
   cout << "\n*pt:Value of A = " << *pt;
   cout << "\n&a :Address of A = " << &a;
   cout << "\npt:Address of A = " << pt;
   cout << "\n&pt:Address of pt = " << &pt;
   cout << "\npt:Value of pt = " << pt;
   return 0;
}

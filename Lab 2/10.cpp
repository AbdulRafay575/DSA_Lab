#include <iostream>
#include<conio.h>
using namespace std;
int main() {
   int a = 20;
   int *pa = &a;
   char b = 'x';
   char *pb = &b;
   float c = 20.02;
   float *pc = &c;
   double d = 20.01;
   double *pd = &d;
   long e = 20.02;
   long *pe = &e;
   cout << "sizeof(a): = " << sizeof (a);
   cout << "\nsizeof(*pa) : = " << sizeof (*pa);

   cout << "\nsizeof(b) : = " << sizeof (b);
   cout << "\nsizeof(*pb): = " << sizeof (*pb);

   cout << "\nsizeof(c) : = " << sizeof (c);
   cout << "\nsizeof(*pc) : = " << sizeof (*pc);

   cout << "\nsizeof(d): = " << sizeof (d);
   cout << "\nsizeof(*pd) : = " << sizeof (*pd);

   cout << "\nsizeof(e): = " << sizeof (e);
   cout << "\nsizeof(*pe) : = " << sizeof (*pe);

   return 0;
}

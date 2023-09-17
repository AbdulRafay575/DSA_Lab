#include <iostream>
#include<conio.h>
using namespace std;

int main() {

   char str[30], *pt;
   cout << "Enter Any string [below 30 chars] : ";
   cin>>str;
   pt = str;

   while (*pt != '\0') {
      cout << *pt;
      pt++;
   }
   return 0;
}

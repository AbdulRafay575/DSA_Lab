#include <iostream>
#include<conio.h>
using namespace std;

int main() {
   char str[20], *pt;
   int i = 0;
   cout << "Calculate Length of String \n";

   cout << "Enter Any string [below 20 chars] : ";
   cin>>str;
   pt = str;
   while (*pt != '\0') {
      i++;
      pt++;
   }
   cout << "\nLength of String : " << i;
   return 0;
}

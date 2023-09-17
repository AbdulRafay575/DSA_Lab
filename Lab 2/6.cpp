#include <iostream>
#include<conio.h>
using namespace std;
int main() {
   char str[20], *pt;
   int i = 0, c = 0;
   cout << " Program to Count vowels in String \n";
   cout << "Enter Any string [below 20 chars] : ";
   cin>>str;
   pt = str;
   while (*pt != '\0') {
      if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u'||*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U')
         c++;
      i++;
      pt++;
   }
   cout << "\nLength of String : " << i;
   cout << "\nVowels Count In the String : " << c;
   cout << "\nConstant Count in the String : " << (i - c);
   return 0;
}

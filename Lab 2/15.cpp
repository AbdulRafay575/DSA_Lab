#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,*ptr;
    ptr=&i;
    for(*ptr=0; *ptr<=1000; *ptr=*ptr+5)
    {
     cout<<*ptr<<" ";
    }
    return 0;
}

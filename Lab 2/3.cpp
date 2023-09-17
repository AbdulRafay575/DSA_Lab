#include <iostream>
using namespace std;
 
int main() {
 
   int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers :";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Numer in reverse order are:\n";
     for(i=4;i>=0;i--)
        cout<<*(p+i)<<endl;
 
 
     return 0;
 
}

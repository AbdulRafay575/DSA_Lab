#include <iostream>
using namespace std;
void change(int *n1, int *n2) {
   int temp;
   temp = *n1;
   *n1 = *n2;
   *n2 = temp;
}
int main() {
   int num1, num2;
   cout<<"Enter the first number : ";
   cin>>num1;
   cout<<"\nEnter the Second number : ";
   cin>>num2;
   change(&num1, &num2);
   cout<<"\nFirst number : "<< num1;
   cout<<"\nSecond number: "<<num2;
   return (0);
}

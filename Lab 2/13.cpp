#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    int mul;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "\n Enter second number: ";
    cin >> num2;
    ptr1 = &num1; 
    ptr2 = &num2;
    mul = *ptr1 * *ptr2; 
    cout << "\n Multiple is: " << mul;
    return 0;
}

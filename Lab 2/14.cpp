#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    float *ptr1, *ptr2;
    float div;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;
    ptr1 = &num1; 
    ptr2 = &num2;
    if(*ptr1>*ptr2){
    	div = *ptr1 / *ptr2; 
    	cout << "\nDivide is: " << div;
	}
	else{
		cout<<"Cant divide by small number";
	}
    
    return 0;
}

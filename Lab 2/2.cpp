#include <iostream>
using namespace std;
int main() {
 
   int ar[5], i, sum = 0;
    int *ptr;
    cout << "Enter any 5 numbers :";
    for (i = 0; i < 5; i++) {
        cin >> ar[i];
    }
    ptr = ar;
    for (i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }
    cout << "\nSum of the array elements :" << sum;
    return 0;
 
}

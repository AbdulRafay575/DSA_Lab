#include <iostream>
#include<conio.h>
using namespace std;
void circlearea(float *v, float *r) {
   *r = 3.14 * (*v) * (*v);
}

int main() {
   float radius, area;
   cout << "Enter the radius of Circle : ";
   cin>>radius;
   circlearea(&radius, &area);
   cout << "\nArea of Circle : " << area;
   return 0;
}

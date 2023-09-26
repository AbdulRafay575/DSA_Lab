#include<iostream>
using namespace std;

int main(){
int var=54;
int *ptr1 = &var;
int **ptr2 ;
	ptr2= &ptr1;
cout<<"**ptr :"<<**ptr2<<endl;
cout<<"*ptr :"<<ptr2<<endl;
cout<<"ptr address :"<<&ptr1<<endl;
cout<<"var address :"<<&var<<endl;
cout<<"ptr2 :"<<ptr2<<endl;

int **ptr3,***ptr4;
ptr3=&ptr1;
ptr4=&ptr3;

cout<<"ptr4 address :"<<***ptr4<<endl;

//Dynamic pointers

 int i,n;
  int * p,*d,**pt;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p= new int[i]; //array allocation
  d= new int;	//int 
  *d=10;
  pt=&d;
  **pt=65;
  cout<<"\n *d :"<<*d<<endl;
  cout<<"\n d :"<<d<<endl;
  cout<<"\n pt :"<<**pt<<endl;
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;
  }

}
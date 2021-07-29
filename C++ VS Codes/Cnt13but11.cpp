#include<iostream>
using namespace std;
int main()
{
int a=3;
int *b=&a;      //* is deerefference operator

cout<<"Address of a is: "<<&a<<endl;
cout<<"Address of a by pointing is: "<<b<<endl;

cout<<"\n\nValue of a is: "<<a<<endl;
cout<<"Value OF a by pointing is: "<<*b<<endl;

// Pointer o pointer
cout<<"\n\n**** Pointer to POinter*******"<<endl;
int **c;
c=&b;
cout<<"Address of b is: "<<&b<<endl;
cout<<"Address of b is by pointer: "<<c<<endl;
cout<<"Value of b is: "<<*c<<endl;

cout<<"\n\nValue of b is by pointer: "<<**c<<endl;
return 0;
}
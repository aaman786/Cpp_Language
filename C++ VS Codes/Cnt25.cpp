#include <iostream>
using namespace std;
class complex;  // forward declaration of class
class calculator
{
public:
    int realnumber(complex, complex);
    int complexpart(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring funtin as friends
    friend int calculator ::realnumber(complex o1, complex o2);
    friend int calculator ::complexpart(complex o1, complex o2);

public:
    void getnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int calculator::realnumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::complexpart(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{   complex c1,c2;
    c1.getnum(2,3);
    c2.getnum(3,2);
    calculator c;
    int res=c.realnumber(c1,c2);
    cout<<"The real part of given eqation is: "<<res<<endl; 
    int res2=c.complexpart(c1,c2);
    cout<<"The complex part of given eqation is: "<<res2<<endl; 


    return 0;
}
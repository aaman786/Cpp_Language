#include <iostream>
using namespace std;
class complex;

class calculator
{

public:
    int realumber(complex, complex);
    int complexnumber(complex, complex);
};

class complex
{
    int a, b;
    friend class calculator; //declareing all class as friend

public:
    void getnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int calculator::realumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::complexnumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.getnum(2, 3);
    c2.getnum(3, 2);
    calculator c;
    int res = c.realumber(c1, c2);
    cout<<"The real part of given eqation is: "<<res<<endl;
    int res2 = c.complexnumber(c1,c2);
    cout<<"The complex part of given eqation is: "<<res2<<endl;
        return 0;
}
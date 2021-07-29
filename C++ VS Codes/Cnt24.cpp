#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    friend complex sum_complex(complex o1, complex o2); //using the private members in functions
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getnum(void)
    {
        cout << "The Complex number is: " << a << " + i" << b << endl;
    }
};

complex sum_complex(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnum(2, 3);
    c1.getnum();

    c2.setnum(3, 2);
    c2.getnum();

    sum = sum_complex(c1, c2);
    sum.getnum();

    return 0;
}
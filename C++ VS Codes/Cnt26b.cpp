#include <iostream>
using namespace std;
class c2;
class c1
{
    int a;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int n1)
    {
        a = n1;
    }
    void diplay(void)
    {
        cout << a << endl;
    }
};

class c2
{
    int b;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int n2)
    {
        b = n2;
    }
    void diplay(void)
    {
        cout << b << endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{   c1 s1;
    s1.setdata(3);
    s1.diplay();

    c2 s2;
    s2.setdata(7);
    s2.diplay();

    swap(s1,s2);
    cout<<"The value of c1 after exchanging becomes: ";
    s1.diplay();
    cout<<"The value of c2 after exchanging becomes: ";
    s2.diplay();


    return 0;
}
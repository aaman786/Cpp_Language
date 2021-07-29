#include <iostream>
using namespace std;
class X
{
    int a, b;

public:
    X(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    X(int n1)
    {
        a = n1;
        b = 0;
    }
    X()
    {
        a = 0;
        b = 0;
    }
    void display(void)
    {
        cout << "The value of a is:  " << a << " and the value of b: " << b << endl;
    }
};
int main()
{
    X a1(3, 7), a2(4), a3;
    a1.display();
    a2.display();
    a3.display();

    return 0;
}
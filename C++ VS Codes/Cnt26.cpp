#include <iostream>
using namespace std;
class Y;
class X
{
    int num;
    friend void add(X, Y);

public:
    void setdata(int value)
    {
        num = value;
    }
};
class Y
{
    int num2;
    friend void add(X, Y);

public:
    void setdata(int value)
    {
        num2 = value;
    }
};
void add(X o1, Y o2)
{
    cout << "The addition is: " << o1.num + o2.num2 << endl;
}
int main()
{
    X a;
    a.setdata(3);
    Y b;
    b.setdata(4);

    add(a,b);
        return 0;
}
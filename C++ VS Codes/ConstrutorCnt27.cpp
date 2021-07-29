#include <iostream>
using namespace std;
class X
{
    int a, b;

public:
    X(void);
    void print(void)
    {
        cout << "The Value of a is: " << a << " and the value of b is: " << b << endl;
    }
};
X ::X(void)     //giving the vakues to a and b
{
    a = 10;
    b = 17;
}
int main()
{   X a,a1,a2;
    a.print();
    a1.print();
    a2.print();

    return 0;
}
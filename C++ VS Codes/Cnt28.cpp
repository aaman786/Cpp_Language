#include <iostream>
using namespace std;
class dconst
{
    int a, b;

public:
    void display(void)
    {
        cout << "The value of a: " << a << endl
             << "and the valu of b: " << b << endl;
    }
    dconst(int, int);
};
dconst::dconst(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    dconst a(4, 7); //giving values to the constructor
    a.display();
    return 0;
}
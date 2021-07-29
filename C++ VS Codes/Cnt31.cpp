// default value constructors
#include <iostream>
using namespace std;
class simple
{
    int a, b, c;

public:
    simple(int n1, int n2 = 14, int n3 = 9) //giving default values to the constrctor
    {
        a = n1;
        b = n2;
        c = n3;
    }
    void display(void);
};
void simple::display(void)
{
    cout << "The value of a: " << a << endl
         << "The Value of b: " << b << endl
         << "and the value of c: " << c << endl;
}
int main()
{
    simple s1(2, 4, 1);
    s1.display();

    return 0;
}
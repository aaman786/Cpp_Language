#include <iostream>
using namespace std;
class base1
{
    int a;
    int b;

public:
    // base1(int n1, int n2) : a(n1=4), b(n2)  //~~~~~~~~~~~~ value present here will be accepted by the compiler
    /*       Output ::-Constructer is executed
The Value of a is: 4
and Valuie of b is: 2           */

    // base1(int n1, int n2) : a(n1), b(n1 * 0)   //~~~~~~~~~~~~~~
    /*       Output ::-Constructer is executed
The Value of a is: 2
and Valuie of b is: 0           */

    // base1(int n1,int n2): a(n1), b(n2+a)     //~~~~~~~~~~~~~
    /*       Output ::-Constructer is executed
The Value of a is: 2
and Valuie of b is: 4           */

    // Test(int n1, int n2) : b(n2), a(n1+b) --> Error
    /*RED Flag this will create problems because a will be initialized first */
    base1(int num1, int num2)
    {
        a = num1;
        b = num2;
        cout << "Constructer is executed" << endl;
        cout << "The Value of a is: " << a << endl
             << "and Valuie of b is: " << b << endl;
    }
};
int main()
{
    base1 d(2, 2);

    return 0;
}
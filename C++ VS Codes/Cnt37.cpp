#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    int b;
};

class derive : protected base{                  //here we had made a protected class.

};

int main()
{
    base b;
    derive d;
    cout<<d.a; //we can't do this thing because a is protected in both the classes.
    return 0;
}
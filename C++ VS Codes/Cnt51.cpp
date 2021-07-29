#include <iostream>
using namespace std;
class base
{
public:
    int var_base = 8;
    virtual void display(void)
    {
        cout << "~~~~Here We are in base class~~~~~" << endl;
        cout << "The value of var_base: " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 45;
    void display(void)
    {
        cout << "~~~~~~~~~Here We are in Derived class~~~~~~" << endl;
        cout << "The value of var_base: " << var_base << endl;
        cout << "The Value of varr_derived: " << var_derived << endl;
    }
};

int main()
{   base  *base_pointer;
    derived obj1;
    base_pointer=&obj1;
    // pointer_base->display(); // it willl throw an error becoz virtual function is not made.
    
    //after adding virtual function in base class.
    base_pointer->display();
    return 0;
}
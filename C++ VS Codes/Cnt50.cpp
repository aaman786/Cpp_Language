#include <iostream>
using namespace std;
class Base{
    public:
    int var_base;
    void display(void){
        cout<<"~~~~~~~Base class here~~~~~~~~~"<<endl;
        cout<<"The value of var_base is: "<<var_base<<endl;
    }
};
class  Derived: public Base{
    public:
    int var_derived;
    void display(void){
        cout<<"\n\n ~~~~~~Derived class Here~~~~~~~"<<endl;
        cout<<"The Value of var_base: "<<var_base<<endl;
        cout<<"The Value of var_dervied: "<<var_derived<<endl;
    }
};
int main()
{
    Base * base_pointer;        //Base class pointer will only access base class not the derived class
    Derived derived_obj;
    base_pointer = &derived_obj; //pointer pointing derived class.

    base_pointer->var_base=45;
    // base_pointer->var_derived=34; //this will throw an error
    base_pointer->display();

    Derived *pointer_derived;
    pointer_derived = & derived_obj;
    pointer_derived->var_derived=10;
    pointer_derived->var_base=7;
    pointer_derived->display();

    return 0;
}
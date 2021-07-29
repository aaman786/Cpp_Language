#include <iostream>
using namespace std;
class base1
{
protected:
    int num1;

public:
    void set_data1(int a)
    {
        num1 = a;
    }
};
class base2
{
protected:
    int num2;

public:
    void set_data2(int b)
    {
        num2 = b;
    }
};
class base3
{   protected:
    int num3;
    public:
    void set_data3(int a){
        num3=a;             //  might error
    }
};

class derived: public base1, public base2,public base3{
    public:
    void show(void){
        cout<<"The value of num1 is: "<<num1<<endl;
        cout<<"The value of num2 is: "<<num2<<endl;
        cout<<"The value of num3 is: "<<num3<<endl;
        cout<<"The sum of all above values is: "<<num1+num2+num3<<endl;
    }
};

/*
The inherited derived class will look something like this:
Data members:
    base1 --> protected
    base2 --> protected

Member functions:
    set_data1() --> public
    set_data2() --> public
    show() --> public
*/

int main()
{   derived d;
    d.set_data1(4);
    d.set_data2(7);
    d.set_data3(10);
    d.show();
    return 0;
}
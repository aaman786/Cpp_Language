#include <iostream>
using namespace std;
class sample
{
    int a;
    int b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getdata(void)
    {
        cout << "The value of a is: " << a << endl
             << "and the value of b is: " << b << endl;
    }
};
int main()
{   cout<<"By using * as dereference operator"<<endl;
    sample s;
    sample *ptr=&s;
    (*ptr).setdata(4,3);
    (*ptr).getdata();

    cout<<"\n\n By using arrow operator as dereference operator"<<endl;
    sample *ptr1= new sample;
    ptr1->setdata(6,7);
    ptr1->getdata();
    return 0;
}
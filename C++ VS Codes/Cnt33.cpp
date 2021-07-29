#include <iostream>
using namespace std;
class simple
{
    int a;

public:
    simple()
    {
        a = 0;
    }
    simple(int num)
    {
        a = num;
    }
    simple(simple &o)//if cpy constructor is not present then compiler make cpy constuctor.
    {
        cout << "The constructor is called..."<<endl;
        a = o.a;
    }
    void display()
    {
        cout <<"The value is: "<< a<<endl;
    }
};
int main()
{
    simple s1, s2, s3(23);  //if i had also madean object here it would not invokedby cpy construtor
    s1.display();
    s2.display();
    s3.display();

    simple z1(s3); //it will copy s3's value 23 in z1.
    z1.display();

    return 0;
}
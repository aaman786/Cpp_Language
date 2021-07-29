// #include <iostream>
// using namespace std;
// class employee
// {
//     int id;
//     int salary;

// public:
//     void setdata(void);
//     void getdata(void);
// };
// void employee ::setdata(void)
// {
//     salary = 500;
//     cout << "Enter your Employee Id: ";
//     cin >> id;
// }
// void employee::getdata(void)
// {
//     cout << "Your Entered Id is: " << id << endl;
// }
// int main()
// {
//     employee e[3];
//     for (int i = 0; i < 3; i++)
//     {
//         e[i].setdata();
//         e[i].getdata();
//     }

//     return 0;
// }

// program for complex number
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void sum_by(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void getnum(void)
    {
        cout << "The Complex number is " << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setnum(2, 3);
    c1.getnum();

    c2.setnum(3, 2);
    c2.getnum();

    c3.sum_by(c1, c2);
    c3.getnum();

    return 0;
}
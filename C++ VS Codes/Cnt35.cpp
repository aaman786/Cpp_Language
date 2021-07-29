#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int Id;
    float salary;
    employee() {}
    employee(int n1)
    {
        Id = n1;
        salary = 14.5;
    }
};
// creating a new class from base class 
class programmer : public employee
{
public:
    int P_languages;
    programmer(int n2)
    {
        Id = n2;
        P_languages = 9;
    }
};
int main()
{
    employee e1(2), e2(6);
    cout << e1.Id << endl;
    cout << e2.Id << endl;
    cout << e1.salary << endl;
    cout << e2.salary << endl;

    programmer p1(4);
    cout << p1.Id << endl;
    cout << p1.P_languages << endl;
    return 0;
}
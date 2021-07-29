#include <iostream>
using namespace std;
class employe
{
    int empId;
    static int count;

public:
    void getdata(void)
    {
        cout << "Enter your Employe Id: " << endl;
        cin >> empId;
        count++;
    }
    void show(void)
    {
        cout << "Your emoploye Id is: " << empId << " and the value of count is: " << count << endl;
    }
    void show_count(void);
};

void employe :: show_count(void)
{
    cout << "The value of count is: " << count << endl;
}

//cout is the static data membe of class employ
int employe::count; //it is defaultly initialized by 0

int main()
{
    employe e1, e2, e3;
    e1.getdata();
    e1.show();

    e2.getdata();
    e2.show();

    e3.getdata();
    e3.show();
    return 0;
}
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your Age: " << endl;
    cin >> age;

    if (age >= 13)
    {
        cout << "\n\nYour age is " << age << ". You can vote" << endl;
    }
    else if (age < 13)
    {
        cout << "\n\nYour age is " << age << ". you cannot vote" << endl;
    }
    else
    {
        cout << "OFf" << endl;
    }
    return 0;
}

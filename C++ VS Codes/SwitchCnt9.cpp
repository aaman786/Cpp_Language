#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char opt;
    int n1, n2;
    cout << "Enter any operation(+,-,*,/): ";
    cin >> opt;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    switch (opt)
    {
    case '+':
        cout << "The addtion is: " << n1 + n2;
        break;
    case '-':
        cout << "The subtraction is: " << n1 - n2;
        break;

    case '*':
        cout << "The multiplication is: " << n1 * n2;
        break;

    case '/':
        cout << "The Dividation is: " << n1 / n2;

    default:
        cout << "Give Valid Input";
        break;
    }
        return 0;
}




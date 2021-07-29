#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
// {
//     int num;
//     cout << "Enter a number whose you want multiplication table of: ";
//     cin>>num;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout <<""<<num<<" * "<<i<<" = "<<num*i<<endl;
//     }

//     return 0;
// }


// {
//     int num, i = 1;
//     cout << "Enter a number whose you want multiplication table of: ";
//     cin >> num;

//     while ()
//     {
//         cout << "" << num << " * " << i << " = " << num * i << endl;
//         i++;
//     }
//     return 0;
// }


{
    int num, i = 1;
    cout << "Enter a number whose you want multiplication table of: ";
    cin >> num;
    do
    {
        cout << "" << num << " * " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
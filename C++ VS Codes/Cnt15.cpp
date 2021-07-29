// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }

// int main()
// {
//     int n1, n2;
//     cout << "Enter numder 1: ";
//     cin >> n1;
//     cout << "Enter numder 2: ";
//     cin >> n2;

//     cout << "\n\nThe sum of Numbers are: " << sum(n1, n2) << endl;
//     return 0;
// }

/*For function prototype :- if we have written function a
fter main and calling i in main body then we to have say to compiler that the function 
is present in the program but h(compiler) has to find it */
#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
    int n1, n2;
    cout << "Enter numder 1: ";
    cin >> n1;
    cout << "Enter numder 2: ";
    cin >> n2;

    cout << "\n\nThe sum of Numbers are: " << sum(n1, n2) << endl;
    return 0;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
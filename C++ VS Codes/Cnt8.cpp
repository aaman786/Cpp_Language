#include <iostream>
#include<iomanip>   //using setw function of this library
using namespace std;

//***********Constant******
// int main(int argc, char const *argv[])
// {
//     const int a = 17;
//     cout << "The value of a is: " << a << endl;
//     a = 74;                     //it is constant above so would not be cahnged in any conditiom.
//     cout << "The value of a is: " << a << endl;
//     return 0;
// }

// *********** Manipulators ****************
int main(int argc, char const *argv[])
{
    int a = 17,  b = 4567, c = 789956;
    cout <<"The value of a without setw(manipulator): "<<a<<endl;
    cout <<"The value of b without setw(manipulator): "<<b<<endl;
    cout <<"The value of c without setw(manipulator): "<<c<<endl;

    cout <<"\n\nThe value of a with setw(manipulator): "<<setw(6)<<a<<endl; //my last digit was 6 so iwant to ressemble valus acc to that.
    cout <<"The value of b with setw(manipulator): "<<setw(6)<<b<<endl;
    cout <<"The value of c with setw(manipulator): "<<setw(6)<<c<<endl;
     return 0;
}
// last of content asociativity is also present.
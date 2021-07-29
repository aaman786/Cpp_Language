// //function overloading code 1
// //function overloading means chosing the function of same name automatically.
// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     cout<<"Function is taking 2 arguments only"<<endl;
//     return a + b;
// }
// int sum(int a, int b, int c)
// {
//     cout<<"Function is taking 3 arguments only"<<endl;
//     return a + b + c;
// }
// int main()
// {
//     cout<<"The sum of 6 and 4 is: "<<sum(6,4)<<endl;
//     cout<<"The sum of 6, 4 and 4 is: "<<sum(6,4,4)<<endl;
//     return 0;
// }

//function overloading code 2
#include <iostream>
using namespace std;
int volume(int r, int h)
{
    return 3.14 * r * h;
}
int volume(int a)
{
    return a*a*a;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
int main()
{
    cout<<"The volume of cyllinder: "<<volume(3,4)<<endl;
    cout<<"The volume of Cude: "<<volume(3)<<endl;
    cout<<"The volume of Cubiod: "<<volume(3,4,2)<<endl;

    return 0;
}
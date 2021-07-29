// #include <iostream>
// using namespace std;
// inline int product (int a, int b)   //inline keyword will skip the calls and execute it rapidly
// {
//     return a*b;
// }
// int main()
// {   int n1,n2;
//     cout<<"Enter a number n1: ";
//     cin>>n1;
//     cout<<"ENter a number n2: ";
//     cin>>n2;

//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     cout<<"The product is: "<<product(n1,n2)<<endl;
//     return 0;
// }



//Constant arguments
#include <iostream>
using namespace std;
 int product (int a, int b=3)   //inline keyword will skip the calls and execute it rapidly
{
    return a*b;
}
int main()
{   int n1;
    cout<<"Enter a number n1: ";
    cin>>n1;
    // cout<<"ENter a number n2: ";
    // cin>>n2;

    cout<<"The product is: "<<product(n1)<<endl;
    return 0;
}
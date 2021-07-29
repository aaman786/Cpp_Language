#include <iostream>
using namespace std;


// int a=4;       // Global Variable
// int main()
// {   int a=10;   //Local Variable
//     cout<<"The value of a is: "<<a;

//     return 0;
// }


// int a=4;       // Global Variable
// int main()
// {   int a=10;   //Local Variable
//     cout<<"The value of a is: "<<::a;  //here i have gaved presidence to global variable

//     return 0;
// }



int main()
{   int a=10;   //Local Variable
    char b='G';
    float PI=1.3;
    bool y=true;                //Whenever it is true it will give 1
    bool z=false;               //Whenever it is false it will give 0

    cout<<"The value of a is: "<<a<<endl; 
    cout<<"The value of b is: "<<b<<endl; 
    cout<<"The value of PI is: "<<PI<<endl; 
    cout<<"The value of y is: "<<y<<endl;       
    cout<<"The value of z is: "<<z<<endl; 


    return 0;
}
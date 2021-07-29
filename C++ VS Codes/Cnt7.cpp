#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
// // ************Float ,Double nad Loong Double Literals*******************
// {
// //    float a=14.7;   //if you pass 34.4 it would go as double but if you pas as value a then it would be go as float.
//    float a =14.7f;      //now it would pass as float
//    long double b=14.1;
//    cout<<"The size of Float a: "<<sizeof(14.7)<<endl;
//    cout<<"The size of a as float: "<<sizeof(14.7f)<<endl;
//    cout<<"the size of long Double b: "<<sizeof(14.1)<<endl;

//    cout<<"\n\nThe size of float in your Pc: "<<sizeof(float)<<endl;
//    cout<<"The size of int in your Pc: "<<sizeof(long double)<<endl;
//     return 0;
// }



// // ************ reference variable ***********
// {
//     int a=7;
//     int &b=a;           //I referenced a with adress of b.
//     cout<< "The value of a is: "<<a<<endl;
//     cout <<"The value of a after referencing is: "<<b<<endl;
//     return 0;
// }



// *************** Typcasting ****************
{
    int a = 45;
    float b = 20.67;
    cout<< "The value of b before typcasting: "<<b<<endl;
    cout << "Value of b after typcasting is: "<< int(b) << endl;
    cout <<"The another way to typcast b is: "<<(int)b<<endl;

    cout << "\n\nThe size of a + b = " << a + b << endl;
    cout << "The size of a + b = " << a + (int)b << endl; //here I made b as an integer by typcasting
    cout << "the size of a + b = " << a + int(b) << endl; //another way to typcaast
    return 0;
}
// //Valid syntax or idea about class.
// #include <iostream>
// using namespace std;

// class student
// {
// private:
//     int a, b, c;

// public:
//     int d, e;

//     void setdata(int a1, int b1, int c1); //Prototype or declaration
//     void getdata()
//     {
//         cout << "The Value at a is: " << a << endl;
//         cout << "The Value at b is: " << b << endl;
//         cout << "The Value at c is: " << c << endl;
//         cout << "The Value at d is: " << d << endl;
//         cout << "The Value at e is: " << e << endl;
//     }
// };
// void student :: setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// main()
// {  student amir;
//     // amir.a=10 This will throws an error as a is in private class
//     amir.d=17;
//     amir.e=36;
//     amir.setdata(3,4,7);
//     amir.getdata();
//     return 0;
// }

// // programm 2 for class
// #include <iostream>
// using namespace std;
// class room
// {
// public:
//     double l, b, h;

//     double area_of_room()
//     {
//         return l * b;
//     }
//     double volume_of_room()
//     {
//         return l * b * h;
//     }
// };
// int main()
// {
//     room r1;
//     cout<<"Enter the Length of room: "<<endl;
//     cin>>r1.l;
//     cout<<"Enter the breadth of room: "<<endl;
//     cin>>r1.b;
//     cout<<"Enter the height of room: "<<endl;
//     cin>>r1.h;

//     // Claculation and displaying the values
//     cout<<"The area of room is: "<<r1.area_of_room()<<endl;
//     cout<<"The volume of room is: "<<r1.volume_of_room()<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
class room;
{
    private:
     int l,b,h;
    public:
   

    // public:

    double getdata(double length, double breadth, double height);

    double area_of_room()
    {
        return l*b;
    }
    double area_of_room()
    {
        return l*b*h;
    }
};
  double room :: getdata(double length, double breadth, double height)
    {
     double l=length;
       double  b=breadth;
        double h=height;
    }


int main()
{   
    room r;
    // int a,b,c;
    // cout<<"Enter Length of room: ";
    // cin>>&a;
    // cout<<"Enter Breadth of room: ";
    // cin>>&b;
    // cout<<"Enter Heigth of room: ";
    // cin>>&c;
    r.getdata(2,3,4);

    // CALCULATIN AND DISPLAYING THE RESULT
    cout<<"The area of room is: "<<r.area_of_room()<<endl;
    cout<<"The volume of room is: "<<r.volume_of_room()<<endl;
    
    return 0;
}
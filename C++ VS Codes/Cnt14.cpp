// // Explaination of structures.
// #include <iostream>
// using namespace std;
// struct student
// {
//     char sNamecharachter;
//     int sId;
//     float marks;
// } s1, s2;
// int main()
// {   
//     s1.sNamecharachter='A';
//     s1.sId=01;
//     s1.marks=45.2;
//     cout<<"The starting nCaharacterr of student 1: "<<s1.sNamecharachter<<endl;
//     cout<<"The Id of student 1: "<<s1.sId<<endl;
//     cout<<"The marks of student 1: "<<s1.marks<<endl;

//     s2.sNamecharachter='N';
//     s2.sId=02;
//     s2.marks=50.6;
//     cout<<"\n\nThe starting nCaharacterr of student 2: "<<s2.sNamecharachter<<endl;
//     cout<<"The Id of student 2: "<<s2.sId<<endl;
//     cout<<"The marks of student 2: "<<s2.marks<<endl;
//     return 0;
// }


// // Explaination of typedef.
// #include <iostream>
// using namespace std;
// typedef struct student
// {
//     char sNamecharachter;
//     int sId;
//     float marks;
// } stu;

// int main()
// {   stu s1,s2; 
//     s1.sNamecharachter='A';
//     s1.sId=01;
//     s1.marks=45.2;
//     cout<<"The starting nCaharacterr of student 1: "<<s1.sNamecharachter<<endl;
//     cout<<"The Id of student 1: "<<s1.sId<<endl;
//     cout<<"The marks of student 1: "<<s1.marks<<endl;

//     return 0;
// }


// // For Unions
// #include <iostream>
// using namespace std;
// union student
// {
//     char sNamecharachter;
//     int sId;
//     float marks;
// } s1,s2;

// int main()
// {   union student s1; 
//     s1.sNamecharachter='A';
//     cout<<"The starting nCaharacterr of student 1: "<<s1.sNamecharachter<<endl;

//     return 0;
// }

// For Enum
#include<iostream>
using namespace std;
int main()
{
enum meal{breakfast,launch=5,dinner};
meal m1=breakfast,m2=launch,m3=dinner;
cout<<m1<<endl; 
cout<<m2<<endl; 
cout<<m3<<endl; 

cout<<"\n\n"<<(m1==2)<<endl; //if it is true then it will return 1 otherwise ) as false
return 0;
}
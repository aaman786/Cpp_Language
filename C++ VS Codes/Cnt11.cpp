// //*********** code for Break*********
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int  i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
//         if (i==2)
//         {
//             break;              //it will put all out of loop.
//         }

//     }

// return 0;
// }

//**************code for Continue Satenment**********
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
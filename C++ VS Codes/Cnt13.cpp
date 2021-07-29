// //*********** General array************
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 6, 8};
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     arr[2] = 455; // I can also change the valuess here
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;
//     return 0;
// }

// // displaying the alaments of ararys uaing the loops.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 6, 8};

//     for (int i = 0; i < 4; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     cout<<"\n\nDisplaying Values in Array using While Loop"<<endl;
//     int i=0;
//     while (i<4)
//     {
//         cout << arr[i] << endl;
//         i++;
//     }

//     i=0;
//     cout<<"\n\nDisplaying Values using Do-While Loops"<<endl;
//     do
//     {
//        cout << arr[i] << endl;
//         i++;
//     } while (i<4);

//     return 0;
// }

// //Acessing values using the pointers.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 6, 8};
//     int *ptr = arr;
//     cout << "The elenments 1 of arrays by pointer is: " << *ptr << endl;
//     cout << "The elenments 2 of arrays by pointer is: " << *(ptr + 1) << endl;
//     cout << "The elenments 3 of arrays by pointer is: " << *(ptr + 2) << endl;
//     cout << "The elenments 4 of arrays by pointer is: " << *(ptr + 3) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8};
    int *p = arr;
    cout << *(p++) << endl; //first 2 is printed them it goes for increment(means on 3 but not printed)
    cout << *(++p) << endl; //it was first incremented by uper line and then again incremented here and gives the value.
    return 0;
}
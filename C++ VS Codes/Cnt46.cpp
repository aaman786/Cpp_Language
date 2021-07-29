#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int *ptr = &a;
    cout << "The value of a: " << a << endl;
    cout << "The Adress of a: " << &a << endl;
    cout << "The value of a by pointer: " << *ptr << endl;
    cout << "The Adress of a by pointer: " << ptr << endl;

    // Using new operator which will give new value to
    cout << "\n\n The use new operator in pointer....." << endl;
    float *p = new float(77.4);
    cout << "The value at address of p is: " << *p << endl;
    cout << "The value address of p is: " << p << endl;

    // Using of new operator for arays
    cout << "\n\n The use of new operator with arrays..." << endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 7;
    *(arr + 2) = 9;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // use of delet operator for freeing the space used
    cout << "\n\n The use of new operator with arrays..." << endl;
    int *array = new int[3];
    arr[0] = 10;
    arr[1] = 7;
    *(arr + 2) = 9;
    delete[] arr;

    // here all the space got clear so you will got an garbage value.
    cout << "All the space is clear so there is garbage value...." << endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
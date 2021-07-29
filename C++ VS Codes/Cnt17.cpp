// #include <iostream>
// using namespace std;
// int factorial(int a)
// {
//     if (a <= 1)
//     {
//         return 1;
//     }

//  return a = a * factorial(a - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number whose you want factorial of: ";
//     cin >> num;

//     cout << "The Factorial is: " << factorial(num);
//     return 0;
// }



// fabonacci series
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
     int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

       cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fibonacci(a)<<endl;
    return 0;
}
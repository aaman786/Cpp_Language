#include <iostream>
#include"cnt1.cpp" // adding of previous program
 
using namespace std;
int main2() //change main
{
    int n1, n2;
    cout << "Enter number n1: ";  // this '<<' is called insertion.
    cin >> n1;

    cout << "Enter number n2: ";    // this '>>' is called Extraction.
    cin >> n2;

    cout << "The sum " << n1 << " and " << n2 << " is"<< endl << n1 + n2;

    return 0;
}

#include <iostream>
using namespace std;

int count = 0;
class sample
{
public:
    sample()
    {
        count++;
        cout << "This is the time when my constructor is called for object" << count << endl;
    }
    ~sample()
    {
        cout << "This is the time when by destructor is called for an object" << count << endl;
        count--;
    }
};
int main()
{
    cout << "Here wee are in our main body" << endl;
    cout << "Creating the first object...." << endl;
    sample s1;
    {
        cout << "We are into a block" << endl;
        sample n2,n3;
        cout << "Exiting the block" << endl;
    }
    cout<<"Now here we are back again into our Main body"<<endl;
    return 0;
}
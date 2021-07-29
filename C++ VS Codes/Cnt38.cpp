#include <iostream>
using namespace std;
class student
{
protected:
    int std_roll;

public:
    void setroll(int r)
    {
        std_roll = r;
    }
    void getroll()
    {
        cout << "The Roll No is: " << std_roll << endl;
    }
};

class marks : public student
{
protected:
    float maths;
    float science;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        science = m2;
    }
    void getmarks()
    {
        cout << "Marks in Maths are: " << maths << endl;
        cout << "Marks in Science are: " << science << endl;
    }
};

class result : public marks
{private:
    float percentage;
public:
void display_result(){
    getroll();
    getmarks();
    cout<<"The Percentage of your marks are: "<< (maths + science) /2 <<"%"<<endl;
}
};
int main()
{   /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
    result r1;
    r1.setroll(56);
    r1.setmarks(56,34);
    r1.display_result();
    return 0;
}
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll(int a1)
    {
        roll_number = a1;
    }
    void display_roll()
    {
        cout << "Roll Number is: " << endl;
    }
};
class Exam : public virtual Student
{
protected:
    float sci_marks;
    float maths_marks;

public:
    void set_marks(float m1, float m2)
    {
        sci_marks = m1;
        maths_marks = m2;
    }
    void display_marks()
    {
        cout << "Marks in Science: " << sci_marks << endl;
        cout << "Marks in MAths: " << maths_marks << endl;
    }
};
class Sports : public virtual Student
{
protected:
    int score;

public:
    void set_score(int s1)
    {
        score = s1;
    }
    void display_score()
    {
        cout << "Score is: " << score << endl;
    }
};
class Result : public Exam, public Sports
{
protected:
    int total;

public:
    void display_result()
    {
        total = maths_marks + sci_marks + score;
        display_roll();
        display_marks();
        display_score();
        cout<<"The Total is: "<<total<<endl;
    }
};
int main()
{   Result r;
    r.set_roll(34);
    r.set_marks(54,41);
    r.set_score(4);
    r.display_result();

    return 0;
}
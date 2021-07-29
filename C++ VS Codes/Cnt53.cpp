#include<iostream>
using namespace std;
// Modification in cnt 52
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0; //pure virtual class->  Used for redefiing
};
int main()
{

return 0;
}
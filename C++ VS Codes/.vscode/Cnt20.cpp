#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void take(void);
    void check(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::take(void)
{
    cout << "Ente an Binary nnumber: ";
    cin >> s;
}
void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '1') && (s.at(i) != '0'))
        {
            cout << "Your Input is Invalid" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl; //after priting all
}
int main()
{
    binary b;
    b.take();
    b.check();  //above(class body) if i put it into the private then will give me an error 
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
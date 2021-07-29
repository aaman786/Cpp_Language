#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int a, b;
    friend void distance(point, point);

public:
    point(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void display(void)
    {
        cout << "The points are: (" << a << "," << b << ")" << endl;
    }
};
void distance(point o1, point o2)
{
    int distance_x = o2.a - o1.a;
    int distance_y = o2.b - o1.b;
    double dist = sqrt((distance_x) * (distance_x) + (distance_y) * (distance_y));
    cout << "The Distance is: " << dist << endl;
}
int main()
{
    point p(2, 3), p2(4, 2);
    p.display();
    p2.display();

    cout << endl
         << endl;
         distance(p,p2);

    return 0;
}
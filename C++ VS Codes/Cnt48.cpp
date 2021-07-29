#include <iostream>
using namespace std;
class shop
{
    int Id;
    float price;

public:
    void setdata(int n1, float n2)
    {
        Id = n1;
        price = n2;
    }
    void getdata(void){
        cout<<"The Id of Item is: "<<Id<<endl;
        cout<<"The Price of Item is: "<<price<<endl;
    }
};

int main()
{ int size=3;
    shop *ptr=new shop[size];
    shop *ptr2=ptr;
    int i,p;
    float q;

    for ( i = 0; i < size; i++)
    {
       cout<<"Enter the Id of Item "<<i+1<<"And price: "<<endl;
       cin>>p>>q;
       ptr->setdata(p,q);
       ptr++;
    }
      for ( i = 0; i < size; i++)
    {   cout<<"Item number: "<<i+1<<endl;
       ptr2->getdata();
       ptr2++;
    }

    return 0;
}
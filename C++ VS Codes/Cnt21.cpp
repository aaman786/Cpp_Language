#include <iostream>
using namespace std;
class purchase
{
    int itemId[20];
    int itemPrice[20];
    int counter;

    public:
    void count(void) {counter=0;}
    void setprice(void);
    void display(void);
};
void purchase :: setprice (void)
{
    cout<<"Enter the Id of Item "<<counter+1<<" : ";
    cin>>itemId[counter];
    cout<<"Enter the price of Item: ";
    cin>>itemPrice[counter];
    cout<<endl;
    counter++;
}

void purchase :: display(void)
{
    for (int  i = 0; i < counter; i++)
    {
        cout<<"The item with Id "<<itemId[i]<<" has price: "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
    purchase shop;
    shop.count();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.display();
    return 0;
}

#include<iostream>
using namespace std;
class shop
{
private:
    int id[100];
    int price[100];
    int counter;

public:
    void initcounter(void)
    {
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout<<"Enter your item id : ";
    cin>>id[counter];
    cout<<"Enter item price : ";
    cin>>price[counter];
    counter++;
}

void shop::displayprice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The item with Id "<<id[i]<<" has price Rs. "<<price[i]<<endl;

    }


}



int main()
{
    shop list;
    list.initcounter();
    list.setprice();
    list.setprice();
    list.setprice();
    list.setprice();
    list.displayprice();
    return 0;
}

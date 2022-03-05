#include <iostream>
using namespace std;

class ShopItem
{

private:
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << endl;
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
        cout << endl;
    }
};

int main()
{
    system("CLS");
    int size = 3;
    ShopItem *array = new ShopItem[size];
    ShopItem *arrayTemp = array;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Id and price of item " << i + 1 << " : ";
        cin >> p >> q;
        // (*array).setData(p, q);
        array->setData(p, q);
        array++;
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Item number : " << i + 1;
        arrayTemp->getData();
        arrayTemp++;
    }
    return 0;
}
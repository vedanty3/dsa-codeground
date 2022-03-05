/// Friend Function...

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
    friend complex sum(complex const &c1, complex const &c2);

public:
    void setdata(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display(void)
    {
        cout << real << " + " << img << "i" << endl;
    }
};

complex sum(complex const &c1, complex const &c2)
{
    complex c3;
    c3.setdata((c1.real + c2.real), (c1.img + c2.img));
    return c3;
}
int main()
{
    complex c1, c2, add;
    c1.setdata(2, 4);
    c1.display();
    c2.setdata(4, 4);
    c2.display();
    add = sum(c1, c2);
    add.display();

    return 0;
}

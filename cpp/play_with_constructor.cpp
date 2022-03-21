#include<iostream>
using namespace std;
class student
{
private:
    int age;
    int rollno;
public:
    student()
    {
        cout<<"Default constructors is called !"<<endl;

    }

    ~student()
    {
        cout<<"Destructor is called !"<<endl;

    }

    void display(void)
    {
        return ;

    }



};
int main()
{
    student s1;
    student s2=s1;             /// it will not act as copy assignment operator, it will act as a copy constructor...
    return 0;
}

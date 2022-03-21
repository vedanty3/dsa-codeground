#include<iostream>
using namespace std;
class student
{
private:
    int age;
public:
    student(int a)
    {
        cout<<"Parameterized constructor is called."<<endl;
        age=a;
    }

    void display(void)
    {
        cout<<"the age is : "<<age<<endl;

    }

};
int main()
{
    student s1(10);
    s1.display();

    student s2(s1);                /// copy constructor...
    s2.display();

    student s3(s2);
    s3.display();

///////////////////////////////////////////////////////////////////////////////////////////

    student *s4= new student(11);
    (*s4).display();
    student s5(*s4);
    s5.display();
    student *s6=new student(*s4);
    s6->display();

    return 0;
}

/// static members are properties of class and can not be accessed using any object.
///static functions can access only static data members and other static functions.
/// "this->" is not available for static member functions.

#include<iostream>
using namespace std;
class staticmem
{
private:
    int rollno;
    int age;

public:
    static int totalstudent;
    staticmem(int age,int rollno)
    {
        this->age=age;
        this->rollno=rollno;
        totalstudent++;
    }

    static void setdata(void)
    {
        totalstudent=0;

    }

    void display(void)
    {
        cout<<"The age of student "<<totalstudent<<" is "<<age<<endl;
        cout<<"The roll number of student "<<totalstudent<<" is "<<rollno<<endl;

    }

};
int staticmem::totalstudent=0;
int main()
{
    staticmem o1(17,21);
    o1.display();

    staticmem o2(18,22);
    o2.display();

    staticmem o3(17,23);
    o3.display();

    staticmem o4(15,24);
    o4.display();

    staticmem o5(16,25);
    o5.display();

    o5.setdata();                ///here i have accessed static variable totalstudent inside static funtion and made it 0.
    staticmem o6(17,26);
    o6.display();

    return 0;
}

#include<iostream>
using namespace std;
class Student
{
private:
    int height;
public:
    int rollno;
    int age;
    int inputheight(int h);
    void displayheight(void);

};

int Student::inputheight(int h)
{
    height=h;
}

void Student::displayheight(void)
{
cout<<"The height of student is "<<height;

}

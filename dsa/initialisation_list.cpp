/// Initialization List...

/* initialization list - it is used when constant properties and reference variable are to be are to be initialized at the time
of memory allocation.*/

#include<iostream>
using namespace std;
class student
{
public:
    int age;
    const int rollno;
    int &j;
    student(int a,int r):rollno(r),age(a),j(age)
    {

    }

    void display(void)
    {
        cout<<"Age is "<<age<<endl;
        cout<<"Roll Number is "<<rollno<<endl;
        cout<<"The value of reference variable j is "<<j;
    }
};
int main()
{
    student s1(18,22);
    s1.display();

    return 0;
}

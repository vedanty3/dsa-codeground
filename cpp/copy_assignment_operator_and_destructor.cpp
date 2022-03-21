#include<iostream>
using namespace std;
class student
{
private:
    int age;
    int rollnumber;

public:
    student(int a,int r)
    {
        cout<<"Construct is called !"<<endl;
        age=a;
        rollnumber=r;
    }

    ~student ()
    {
        cout<<"A destructor has been called !"<<endl;
    };

    void display (void)
    {
        static int count;
        cout<<"Student "<<count+1<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll number : "<<rollnumber<<endl;
        count++;


    }
};
int main()
{
    student s1(17,21);
    s1.display();
    student s2(18,22);
    s2.display();
    s2=s1;                                          /// copy assignment operator (s1=s2; || *s1=s2)...
    s2.display();
    student *s3= new student(16,23);
    (*s3).display();
    *s3=s1;
    (*s3).display();
    delete s3;
    student s4=s1;                                  /// it will call copy constructor...
    s4.display();
    return 0;
}

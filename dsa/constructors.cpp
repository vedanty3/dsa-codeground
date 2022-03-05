#include<iostream>
using namespace std;
class student
{
    /// As soon as a constructor is created by the user default constructor is no longer available to us...
private:
    int age;
    int rollno;
public:
    student()                    /// A default constructor has no arguements, no return type and has name same as class name...
    {
        cout<<"Default constructor has been created."<<endl;

    }


    student(int rollno)
    {
        cout<<"A parameterized constructor has been called. "<<endl;
        this->rollno=rollno;                                        /// this keyword should be used when property name and parameter name is same.

    }

    student(int r,int agee)
    {
        cout<<"Parameterized constructor with two arguements."<<endl;
        rollno=r;
        age=agee;

    }



    void display(void)
    {
        cout<<"The age of student is :"<<age<<endl;
        cout<<"The roll number of student is :"<<rollno<<endl;


    }


};


int main()
{
    student s1;                         /// " student s1; " it is interpreted as " s1.student(); "...
    s1.display();
    student s2(22);
    s2.display();                       /// student *s2=new student(22);  s2->display();
    student *s3=new student(23);
    (*s3).display();
    student s4(33,16);
    s4.display();


}

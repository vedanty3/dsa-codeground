#include<iostream>
#include "isolation_of_logic.cpp"

using namespace std;

int main()
{
    /// creating objects statically...

    Student s1,s2;
    s1.age=17;
    s2.age=16;
    s1.rollno=22;
    s2.rollno=23;
    cout<<"Age of student 1 is "<<s1.age<<" and roll number is "<<s1.rollno<<endl;
    cout<<"Age of student 2 is "<<s2.age<<" and roll number is "<<s2.rollno<<endl;



    /// creating objects dynamically...

    Student *s3=new Student;
    (*s3).age=17;
    (*s3).rollno=24;
    cout<<"Age of student 3 is "<<(*s3).age<<" and roll number is "<<(*s3).rollno<<endl;

    /// shortcut for displaying dynamically created objects...

    s3->age=18;
    s3->rollno=100;
    cout<<"Age of student 3 is "<<s3->age<<" and roll number is "<<s3->rollno<<endl;


    /// accesing private members with the use of functions...

    (*s3).inputheight(170);
    (*s3).displayheight();           /// can be written as " s3->displayheight(); "...



}

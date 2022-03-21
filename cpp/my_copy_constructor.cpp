/// Shallow Copy
/*
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int age;
public:
    char *name;
    student(int age,char *name)
    {
        this->age=age;
        this->name=name;                       ///***Default copy constructor uses shallow copy
        strcpy(this->name,name);

    }
    void display(void)
    {
        cout<<"Age : "<<age<<endl;
        cout<<"Name : "<<name<<endl;

    }

};
int main()
{
    char name[]="abcd";
    student s1(17,name);
    s1.display();
    name[0]='x';
    student s2(s1);
    s2.display();
    s1.display();

    return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///Deep Copy

/*
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int age;
public:
    char *name;                         /// *** We should create our own copy constructor when we create "char array[]" dynamically...***
    student(student const  &s1)
    {
        this->age=s1.age;
        this->name=new char [strlen(s1.name)+1];
        strcpy(this->name,s1.name);

    }
    student(int age,char *name)
    {
        this->age=age;
        this->name=new char [strlen(name)+1];
        strcpy(this->name,name);

    }
    void display(void)
    {
        cout<<"Age : "<<age<<endl;
        cout<<"Name : "<<name<<endl;

    }

};
int main()
{
    char name[]="abcd";
    student s1(17,name);
    s1.display();
    name[0]='x';
    student s2(s1);
    s2.display();
    s1.display();

    return 0;
}
*/


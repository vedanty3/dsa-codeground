#include<iostream>
using namespace std;
class student
{
private:
    int rollno;
    int age;
public:
    void setdata(void)
    {
        cout<<"Enter the age of this student : "<<endl;
        cin>>age;
        cout<<"Enter the roll number "<<endl;
        cin>>rollno;
    }

    void getdata(void)
    {
        cout<<"The age of this student is "<<age<<endl;
        cout<<"The roll number of this student is "<<rollno<<endl<<endl;

    }

};
int main()
{
    student s[5];
    for(int i=0; i<5; i++)
    {
        s[i].setdata();
        s[i].getdata();

    }

    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int age;
    char *name;
public:
    student(int age,char name[])
    {
        this->age=age;

        /// this->name=name;      *** shallow copy - this will only copy address(should not be used ideally).***

        this->name=new char[strlen(name)+1];  /// *** deep copy - this will make a new array and copy entire array.***

        strcpy(this->name,name);
    }

    void display(void)
    {
        cout<<age<<" "<<name<<endl;

    }
};
int main()
{
    char name[]="raj";
    student s1(17,name);
    s1.display();
    name[2]='m';
    student s2(16,name);
    s2.display();
    s1.display();

    return 0;
}

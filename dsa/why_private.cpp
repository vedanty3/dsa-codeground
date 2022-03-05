#include<iostream>
using namespace std;
class student
{
private:
    int password=7744;
    int age=18;
    int rollnumber=1;
    int height=171;
public:
    void getdata(void)
    {
        int key;
        cout<<"Enter the password : ";
        cin>>key;
        password=key;

    }



    void displaydata()
    {
        if(password!=7744)
        {
            cout<<"Invalid credentials ! ";
        }
        else
        {
            cout<<"Student information : "<<endl;
            cout<<"Age is "<<age<<endl;
            cout<<"Rollnumber is "<<rollnumber<<endl;
            cout<<"Height is "<<height<<"cm"<<endl;

        }

    }

};

int main()
{
    student s1;
    s1.getdata();
    s1.displaydata();
}

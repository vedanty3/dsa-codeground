#include<iostream>
#include<string>
using namespace std;


class binary
{
private:
    void chk_binary(void);
    string s;
public:
    void read(void);

    void display(void);
    void ones_compliment(void);
};



void binary::read(void)
{
    cout<<"Enter a binary number : ";
    cin>>s;
}



void binary::chk_binary(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"It is not a binary number";
            exit(0);
        }
    }

}



void binary::display(void)
{
    chk_binary();
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);

    }
    cout<<endl;
}



void binary::ones_compliment(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';

        }

        else
        {
            s.at(i)='0';

        }
    }

}



int main()
{
    binary b;
    b.read();
/// b.chk_binary();                         *** It can be declared inside "display" function without '.' (dot) operator ***
    cout<<"You have entered : ";
    b.display();
    cout<<"The ones compliment is : ";
    b.ones_compliment();
    b.display();
    return 0;
}


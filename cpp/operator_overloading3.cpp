#include<iostream>
using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }

    void print(void)
    {
        cout<<numerator<<"/"<<denominator<<endl;

    }

    void simplify(void)
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1; i<=j; i++)
        {
            if(numerator%i==0 && denominator%i==0)
            {
                gcd=i;

            }
        }
        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }

    fraction operator++(int)
    {
        fraction fnew(numerator,denominator);
        numerator=numerator+denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    fraction& operator+=(fraction const &f2)
    {
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+y*f2.numerator;
        numerator=num;
        denominator=lcm;
        simplify();
        return *this;
    }
};


int main()
{
    /*
     fraction f1(10,2);
     fraction f2=f1++;             /// Nesting is not allowed on post-increment operator...
     f1.print();
     f2.print();
    */


    /*
     fraction f1(10,3);
     fraction f2(5,2);
     f1+=f2;
     f1.print();
     f2.print();
    */


    fraction f1(10,3);
    fraction f2(5,2);
    (f1+=f2)+=f2;      /// If we do not return by reference then output of "(f1+=f2)" will be system copy and "+=f2" will work on a system copy...
    f1.print();
    f2.print();


}

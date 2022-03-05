/// in this code instead of doing "f1=f1+f2" we have done f3=f1+f2 and then find the sum using "f1.add(f2)"
///---------------------------------------------------------------------------------------------------- method and also by "operator overloading".

/*
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
        cout<<"The fraction is \a"<<numerator<<"/"<<denominator<<endl;

    }

    fraction add(fraction const &f2)
    {
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=x*this->numerator+y*f2.numerator;
        //  this->numerator=num;
        //  this->denominator=lcm;
        //  this->simplify();               ///"this->" means it is called for f1.
        fraction fnew(num,lcm);             ///***parameterized constructor called.***
        fnew.simplify();
        return fnew;

    }

    fraction  operator+(fraction const &f2)                  ///***Operator overloading.***
    {
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=x*this->numerator+y*f2.numerator;
        //  this->numerator=num;
        //  this->denominator=lcm;
        //  this->simplify();               ///"this->" means it is called for f1.
        fraction fnew(num,lcm);             ///***parameterized constructor called.***
        fnew.simplify();
        return fnew;

    }

    void simplify(void)
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1; i<=j; i++)

            if(numerator%i==0 && denominator%i==0)
            {
                gcd=i;
            }

        this->numerator=numerator/gcd;
        this->denominator=denominator/gcd;
    }
};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    fraction f3=f1.add(f2);
    fraction f4=f1+f2;            ///***operator overloading is used to avoid use of add function and "+" operator is being overloaded.***
    f1.add(f2);
    f1.print();
    f2.print();
    f3.print();
    f4.print();
}

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print(void)
    {
        cout << "The fraction is " << numerator << "/" << denominator << endl;
    }

    void simplify(void)
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)

            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }

        this->numerator = numerator / gcd;
        this->denominator = denominator / gcd;
    }

    void multiply(fraction const &f2)
    {
        this->numerator = numerator * f2.numerator;
        this->denominator = denominator * f2.denominator;
        simplify();
    }

    fraction operator*(fraction const &f2)
    {
        int n = numerator * f2.numerator;
        int d = denominator = denominator * f2.denominator;
        fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction const &f2)
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);
    f1.print();
    f2.print();
    fraction f3 = f1 * f2; ///***operator overloading is used to avoid use of add function and "+" operator is being overloaded.***
    f3.print();
    if (f1 == f2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "Not equal";
    }
}

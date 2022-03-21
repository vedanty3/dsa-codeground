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
        this->numerator=numerator;                               /// using "this->" is mandatory here...
        this->denominator=denominator;                           /// using "this->" is mandatory here...

    }

    void print(void)
    {
        cout<<"f1/f2 = "<<this->numerator<<"/"<<this->denominator<<endl;      /// using "this->" is optional here...

    }

    /// reference operator is used to avoid copy...
    /// but still there is a problem, the values can be overwritten (i.e f2.numerator=3). therefore "const" is used.

    void add(fraction const &f2)  /// "fraction const &f2" = "main.f2"           /// copy constructor is being getting called...
    {
        int lcm = this->denominator*f2.denominator;               /// using "this->" is optional here...
        int x = lcm/this->denominator;                            /// using "this->" is optional here...
        int y = lcm/f2.denominator;
        int num = x*this->numerator+y*f2.numerator;               /// using "this->" is optional here...
        this->numerator=num;                                      /// using "this->" is optional here...
        this->denominator=lcm;                                    /// using "this->" is optional here...
        simplify();
        ///f2.numerator = -1; ***my aim is to avoid this***

    }

    void multiply(fraction const &f2)
    {
        this->numerator = numerator*f2.numerator;
        this->denominator = denominator*f2.denominator;


    }

    void simplify(void)
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);             /// using "this->" is optional here...
        for(int i=1; i<=j; i++)
        {
            if(numerator%i==0 && denominator%i==0)
            {
                gcd=i;

            }
        }
        this->numerator=numerator/gcd;                            /// using "this->" is optional here...
        this->denominator=denominator/gcd;                        /// using "this->" is optional here...
    }
};

int main()
{
    cout<<"Result of addition is : "<<endl;
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    cout<<"Result of multiplication is : "<<endl;
    f1.multiply(f2);
    f1.simplify();
    f2.simplify();
    f1.print();
    f2.print();
    return 0;
}


/// using in-built "__gcd(m,n)" function...
/// header file "#include<algorithm>"...

/*
#include<iostream>
#include<algorithm>
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
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

    void add(fraction f2)
    {
        int lcm = this->denominator*f2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f2.denominator;
        int num = x*this->numerator+y*f2.numerator;
        this->numerator=num;
        this->denominator=lcm;
        int gcd= __gcd(numerator,denominator);
        this->numerator=numerator/gcd;
        this->denominator=denominator/gcd;

    }

};
int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();


    return 0;
}
*/

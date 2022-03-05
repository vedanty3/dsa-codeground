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
        cout<<"The fraction is "<<numerator<<"/"<<denominator<<endl;
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

    fraction& operator++()                         /// return by reference...
    {
        numerator=numerator+denominator;
        simplify();
        return *this;
    }
};


int main()
{
    fraction f1(10,2);

    /*
           ++f1;
           fraction f2=++f1;
           f1.print();
           f2.print();
    */





    f1.print();
    ++(++f1);         /// Nesting is allowed for pre-increment operator...
    f1.print();






    /*

      fraction f3 = ++(++f1);
      f1.print();
      f3.print();

    */

}

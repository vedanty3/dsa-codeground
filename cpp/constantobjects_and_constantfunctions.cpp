#include <iostream>
using namespace std;
class fraction
{

public:
    int numerator = 12;
    int denominator = 13;

    int displaydata(void) const
    {
        return numerator;
    }
    void setdata(int n, int d) const
    {
        numerator = n; /// within constant functions the properties can not be modified...
        denominator = d;
    }
};
int main()
{
    fraction const f1; /// constant objects can only access constant functions...
    f1.displaydata();
    f1.setdata(10, 20);
}

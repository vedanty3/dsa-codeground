#include<iostream>
using namespace std;

template<typename T,typename W>

class Pair
{
private:
    T x;
    T y;
    W z;
public:
    void setX(T x)
    {
        this->x=x;
    }
    T getX()
    {
        return x;
    }

    void setY(T y)
    {
        this->y=y;
    }
    T getY()
    {
        return y;
    }


    void setZ(W z)
    {
        this->z=z;
    }
    W getZ()
    {
        return z;
    }
};


int main()
{
    Pair <Pair<int,char>,double>p;
    Pair <int,char>temp;
    temp.setX(4);
    temp.setY('a');
    p.setX(temp);
    p.setZ(1.2324);
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getZ()<<endl;

    return 0;
}


























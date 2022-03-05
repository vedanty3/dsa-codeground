#include<iostream>
using namespace std;
    union money
    {
        float salary;   // 4 bytes
        int age;        // 4 byte           **maximum 4 bytes memory will be used, has better memory management than struct...
        char fav;       // 1 byte
    };


    typedef struct bio
    {
        int age;        // 4 byte
        float height;   // 4 byte          **total 9 bytes memory will be used...
        char fav;       // 1 byte

    }ep;


    int main()
    {
      //  union money vedant;
        //vedant.salary=221000;
       // ep vedant;
       // vedant.age=18;
        //vedant.height=5.9;
       // cout<<vedant.age<<endl<<vedant.height<<vedant.salary<<endl;
       enum fav{red,yellow};
       cout<<red;
       cout<<yellow;

    }

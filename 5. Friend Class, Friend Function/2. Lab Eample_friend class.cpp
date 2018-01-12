#include<iostream>
using namespace std;

class A
{
    int m=20,n=30;
    //friend class B;
public:
    void get_data()
    {
       m=50;
    }
    friend class B;
};

class B
{
    int y=30;
public:
    int print(A k)
    {
        cout<<"m = "<<k.m<<endl;
        cout<<"n = "<<k.n<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"m + n + y = "<<k.n+k.m+y<<endl;
    }
};

int main()
{
    A a;
    B b;
    //a.get_data();
    b.print(a);

    return 0;
}


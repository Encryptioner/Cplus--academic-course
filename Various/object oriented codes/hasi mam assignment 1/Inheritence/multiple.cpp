
#include<iostream>
using namespace std;
class A
{
public:
    int x,y;
    void get_xy(int a,int b)
    {
        x=a;
        y=b;
    }
};
class B
{
public:
    int m,n;
    void get_mn(int c,int d)
    {
        m=c;
        n=d;
    }
};
class C:public A,public B
{
    public:
    void print()
    {
        cout<<x*y+m*n;
    }
};
int main()
{
    C c;
    c.get_xy(10,20);
    c.get_mn(5,10);
    c.print();
}

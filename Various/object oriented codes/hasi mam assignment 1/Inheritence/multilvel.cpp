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
class B:public A
{
    public:
    int m,n;
    void print()
    {
        cout<<x*y<<endl;
    }
};
class C:public B
{
public:
    void get_mn(int v,int t)
    {
        m=v;
        n=t;
    }
    void printC(){cout<<m*n+x*y;}
};
int main()
{
    C c;
    c.get_xy(10,20);
    c.get_mn(5,10);
    c.print();
    c.printC();
}

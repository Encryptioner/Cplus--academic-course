
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
    void printB()
    {
        cout<<x*y<<endl;
    }
};
class C:public A
{
public:
    void printC()
    {
        cout<<x+y<<endl;
    }
};
class D:public A
{
public:
    void printD()
    {
        cout<<x-y<<endl;
    }
};
int main()
{
    B b;
    C c;
    D d;
    b.get_xy(10,20);
    b.printB();
    c.get_xy(10,20);
    c.printC();
    d.get_xy(10,20);
    d.printD();
}

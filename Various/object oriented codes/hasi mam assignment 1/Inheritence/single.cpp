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
    void print()
    {
        cout<<x*y;
    }
};
int main()
{
    B b;
    b.get_xy(10,20);
    b.print();
}

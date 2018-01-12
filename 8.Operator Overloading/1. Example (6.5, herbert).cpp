#include<iostream>
using namespace std;

class A
{
    int x,y;
public:
    A()
    {
        x=0;
        y=0;
    }
    A(int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        cout<<"i = "<<i<<"\nj = "<<j<<endl;

        i=x;
        j=y;

        cout<<"i = "<<i<<"\nj = "<<j<<endl;
    }
    friend A operator+(A ob1,A ob2);

};

A operator+(A ob1,A ob2)
{
        A temp;
        temp.x=ob1.x+ob2.x;
        temp.y=ob1.y+ob2.y;
        return temp;
}

int main()
{
    A o1(10,10),o2(5,3),o3;
    int x,y;
    o3=o1+o2;
    o3.get_xy(x,y);
    cout<<"(o1 + o2) X : "<<x<<" , Y : "<<y<<endl;
    return 0;
}

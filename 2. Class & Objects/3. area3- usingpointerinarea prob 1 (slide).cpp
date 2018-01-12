#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    void set(int l,int w)
    {
        length=l;
        width=w;
    }
    void print()
    {
        cout<<"Length = "<<length<<"\nWidth = "<<width<<endl;
    }
    int area()
    {
        return length*width;
    }
};

int main()
{
    rectangle r1;
    r1.set(10,20);
    rectangle *=r2;

    // rectangle *r2;
    cout<<"\n\naddress of r2 = "<<r2<<endl<<endl;
    r2=&r1;
    r2->area();
    /*cout<<"\n\naddress of r1 = "<<r2<<endl<<endl;
    cout<<"\n\nWhy? Wrong answer..  Now? How to know address of r2 = "<<r2<<endl<<endl;
    r2->set(8,10);

    rectangle *r3;
    r3=new rectangle();
    r3->set(80,100);
    delete r3;
    r3=NULL;

    r1.print();
    cout<<"Area = "<<r1.area()<<endl;*/

    return 0;
}



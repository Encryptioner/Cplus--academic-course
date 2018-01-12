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
    rectangle *r3;
    r3=new rectangle();
    //r3=&r1;
    r3->set(80,100);
    cout<<"\n\naddress of r3 = "<<r3<<endl<<endl;
    delete r3;
    r3=NULL;
    cout<<"\n\nNow, address/value (?) of r3 = "<<r3<<endl<<endl;

    //r1.print();
    //cout<<"Area = "<<r1.area()<<endl;

    return 0;
}




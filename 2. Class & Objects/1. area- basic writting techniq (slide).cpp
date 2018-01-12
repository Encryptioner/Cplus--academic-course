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
    r1.print();
    cout<<"Area = "<<r1.area()<<endl;

    return 0;
}


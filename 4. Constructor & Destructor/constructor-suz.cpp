#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    rectangle();cout<<"\niii\n"{}
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

/*rectangle :: rectangle()
{.
    cout<<"\nhji\n";
}
*/
int main()
{
    rectangle r1;
    r1.set(10,20);
    r1.print();
    cout<<"Area = "<<r1.area()<<endl;
    rectangle *r3= new rectangle();
    r1.rectangle();
    //r3.rectangle();
    return 0;
}



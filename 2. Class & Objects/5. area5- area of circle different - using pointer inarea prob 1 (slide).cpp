#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    rectangle();/*constructor*/
    int rectengle(int w, int l);/*constructor with parameter*/
    void set(int w, int l);
    void print();
    int area();
};

rectangle :: rectangle()
{
	width = 20;
	length = 50;
};
void rectangle :: set(int l,int w)
    {
        length=l;
        width=w;
    }
void rectangle :: print()
    {
        cout<<"Length = "<<length<<"\nWidth = "<<width<<endl;
    }
int rectangle :: area()
    {
        return length*width;
    }

int main()
{
    rectangle *r7=new rectangle();
    cout<<"\n\naddress of r7 = "<<r7<<endl<<endl;
    delete r7;
}

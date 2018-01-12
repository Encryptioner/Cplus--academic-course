#include<iostream>
//#include<sting.h>

using namespace std;
class Rectangle{
private:
    int length;
    int width;
public:
    Rectangle(){cout<<"Inside constructor\t";}
    Rectangle(int l,int w){
     length=l;
     width=w;

    }
     Rectangle(Rectangle &p){
     length=p.length;
     width=p.width;

    }
        void set(int l,int w)
        {
            length=l;
            width=w;
        }
        void print()
        {
            cout<<"Length="<<length<<"\tWidth="<<width<<endl;
        }
        int area()
        {
            return length*width;
        }
};
int main()
{
    Rectangle r1(10,20);
    Rectangle *r2=new Rectangle(r1);

   // r1.set(10,20);
    r2->print();
    cout<<"Area="<<r2->area();

}
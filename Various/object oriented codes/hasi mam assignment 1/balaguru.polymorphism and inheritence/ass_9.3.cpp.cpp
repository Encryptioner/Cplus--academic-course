#include<iostream>
#define PI 3.1416
using namespace std;
class shape
{
public:
    double x,y;
    void get_data(double a,double b)
    {
        x=a;
        y=b;
    }
    virtual void display()
    {
        cout<<"\nAREA="<<x*y<<endl;
    };
};
class triangle:public shape
{
public:
    void display()
    {
        cout<<"\nArea of triangle= "<<.5*x*y<<endl;
    }
};
class rectangle:public shape{};

class circle:public shape
{
public:
    void display()
   {
    cout<<"\nArea of circle= "<<2*PI*x<<endl;
   }
};
int main()
{
    int choice;
    double a,b;
    char ch;
    triangle t;
    rectangle r;
    circle c;
    cout<<"MENU\n----\n1.Area of TRIANGLE.\n2.Area of RECTANGLE.\n3.Area of CIRCLE\n4.Exit\n";
    again:
    cout<<"\n\nInput yout choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"\nBase: ";
        cin>>a;
        cout<<"Hight: ";
        cin>>b;
        t.get_data(a,b);
        t.display();
        break;
    case 2:
        cout<<"\n\nInput data:\n----------\nLength: ";
        cin>>a;
        cout<<"Width: ";
        cin>>b;
        r.get_data(a,b);
        r.display();
        break;
    case 3:
        cout<<"\nInput the redious: ";
        cin>>a;
        b=0;
        c.get_data(a,b);
        c.display();
        break;
    default:
        cout<<"\nSorry... Invalid choice.";
    case 4:
        cout<<"\n\n\n----END OF THE PROGRAM----\n\n";
        return 0;
    }
    cout<<"\nDo you want to try again?(y/n)";
    cin>>ch;
    if(ch=='y')
        goto again;
    else
        cout<<"\n--THANK YOU--\n\n";
    return 0;
}

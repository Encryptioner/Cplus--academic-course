#include<iostream>
#include<cstring>
using namespace std;

class TwoDshape
{
private:
    double width;
    double height;

public:

    //default constructor
    TwoDshape()
    {width=height=0.0;}

    //constructor with parameter for Twodshape
    TwoDshape(double w, double h)
    {width=w;
    height=h;}

    //constructor object with equal width & height
    TwoDshape(double x)
        {width=height=x;}

    void showdim()
    {
        cout<<"width & height are : width = "<<width<<" "<<"height = "<<height;
    }

    //accessor functions
double getwidth()
{return width;}
double getheight()
{return height;}

void setwidth(double w)
{width=w;}
void setheight(double h)
{height=h;}


};

class Triangle:public TwoDshape
{
private:
     char style[20];

public:

    //constructor for triangle
   Triangle()
  {strcpy(style, "unknown");}

  //constructor with three parameters
  Triangle(char *str, double w, double h):TwoDshape(w,h)
  {strcpy(style, str);}

  //construct an isosceles
  Triangle(double x):TwoDshape(x)
  {strcpy(style,"isosceles");}

    double area()
    {
        return getwidth()*getheight()/2;
    }

    void showstyle()
   {
   cout<<"Triangle is : "<<style<<endl;
   }

};



int main()
{


    Triangle t1;
    Triangle t2("right",8.0,12.0);
    Triangle t3(4.0);

    // t1=t2;

   cout<<"Info for t1 :"<<endl;
    t1.showstyle();
    t1.showdim();
   cout<<"\narea is : "<<t1.area()<<endl;

    cout<<"\nInfo for t2 : "<<endl;
    t2.showstyle();
    t2.showdim();
    cout<<"\nArea is : "<<t2.area()<<endl;

   cout<<"\nInfo for t3 : "<<endl;
    t3.showstyle();
    t3.showdim();
    cout<<"\nArea is : "<<t3.area()<<endl;

    return 0;
}




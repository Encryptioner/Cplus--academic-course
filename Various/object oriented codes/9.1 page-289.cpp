#include<iostream>
using namespace std;
class shape{
   public:
   double area1, area2;
  public:
      void get_data();
      virtual void display_area();
};
void shape::get_data()
{
    int a,b;
    cout<<"\nEnter length\n";
    cin>>a>>b;
}
void shape::display_area()
{
    area1=(1/2)*a*b;
    area2=(a*b);
    cout<<"Area of a triangle="<<area1<<endl;
    cout<<"Area of a rectangle="<<area2<<endl;
}
class triangle: public shape{
 public:
     void display_area();
};

class rectangle:public shape{
 public:
     void display_area();
};
int main()
{
    shape ob;
    ob.get_data();
}

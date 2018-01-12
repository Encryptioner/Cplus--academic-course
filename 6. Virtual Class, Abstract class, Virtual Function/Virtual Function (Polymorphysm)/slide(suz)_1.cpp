#include <iostream>
using namespace std;


class Base{
  public:
     void draw(){cout<<"Base Class"<<endl;}
};

class Derv1:public Base{
  public:
     void draw(){cout<<"Derv1 Class"<<endl;}
};

class Derv2:public Base{
  public:
     void draw(){cout<<"Derv2 Class"<<endl;}
};


int main()
{
 Derv1 dv1;
 Derv2 dv2;
 Base *ptr;

 ptr= &dv1;
 ptr->draw();

ptr= &dv2;
 ptr->draw();
}

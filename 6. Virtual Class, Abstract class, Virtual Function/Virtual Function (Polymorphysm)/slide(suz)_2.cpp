#include <iostream>
using namespace std;


class Base{
  public:
     virtual void draw(){cout<<"Base Class"<<endl;}
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
 int i;
 Derv1 dv1;
 Derv2 dv2;
 Base *ptr[20];

//Shape *ptr[100];
    for(i=0;i<2;i++)
    ptr[i]= &dv1;
    ptr[i]->draw();


 /*ptr= &dv1;
 ptr->draw();

 ptr= &dv2;
 ptr->draw();*/

 return 0;
}


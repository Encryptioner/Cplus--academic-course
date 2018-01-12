#include<iostream>
#include<cstring>
#include<vector>`
using namespace std;
class Base
{
public:
    virtual void draw()=0;
};
class Derv1:public Base
{
    void draw(){cout<<"Derv1 class"<<endl;}
};
class Derv2:public Base
{
    void draw(){cout<<"Derv2 class"<<endl;}
};
int main(void)
{
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr;
    ptr=&dv1;
    ptr->draw();
    ptr=&dv2;
    ptr->draw();
}

#include<iostream>
#include<cstdio>
using namespace std;


class base
{
public:

    virtual void draw()
    {
        cout<<"Base\n";
    }
    //virtual void draw()=0  .. pure virtual class ... Now for pure this is called abstract class
};

class derv1 : public base
{
public:

    void draw()
    {
        cout<<"Derv1\n";
    }
};

class derv2 : public base
{
public:

    void draw()
    {
        cout<<"Derv2\n";
    }
};

int main()
{


    base *ptr,b;
    derv1 dv1;
    derv2 dv2;

    ptr=&dv1;
    ptr->draw();

    ptr=&dv2;
    ptr->draw();

    //b.draw();

    return 0;
}


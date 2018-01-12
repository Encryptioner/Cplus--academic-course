#include<iostream>
using namespace std;


class base
{
public:

    void draw()
    {
        cout<<"Base\n";
    }
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
    base *ptr;
    derv1 dv1;
    derv2 dv2;

    ptr=&dv1;
    ptr->draw();

    ptr=&dv2;
    ptr->draw();

    return 0;
}

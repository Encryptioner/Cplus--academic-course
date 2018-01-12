
#include <iostream>

using namespace std;

class A
{
public:
    virtual void f()=0;
};

class B:public A
{
    void f()
    {
        cout<<"Class B"<<endl;
    }
};

class C:public B
{
public:
    void f()
    {
        cout<<"Class C"<<endl;
    }
};

int main(void)
{
    B b;
    C c;
    A *a;//objects can't be created for an abstract class by general technique

    a=&b;
    a->f();

    c.f();

    return 0;
}

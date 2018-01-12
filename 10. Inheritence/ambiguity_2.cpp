//in single inheritence

#include <iostream>
using namespace std;

class  A
{
    public:
    void show(){ cout << "class A" << endl; }
};

class  B : public A
{
    public:
    void show(){ cout << "class B" << endl; }
};

int main()
{
    B b;
    b.show();
    b.A::show();
    b.B::show();

    return 0;
}

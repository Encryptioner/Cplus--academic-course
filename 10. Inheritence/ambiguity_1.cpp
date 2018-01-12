#include <iostream>
using namespace std;

class  A
{
    public:
    void show(){ cout << "class A" << endl; }
};

class  B
{
    public:
    void show(){ cout << "class B" << endl; }
};

class  C : public A, public B
{
    public:
    void show()
    {
        A :: show();
    }
};

int main()
{
    C c;
    c.show();

    return 0;
}


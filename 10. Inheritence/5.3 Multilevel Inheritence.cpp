#include <iostream>

using namespace std;

class A
{
    protected:
        int a;
    public:
        void get_a(int ax)
        {
            a=ax;
        }
};
class B:public A
{
    protected:
        int b;
    public:
        void get_b(int bx)
        {
            b=bx;
        }
};

class C:public B
{
public:
    int show()
    {
        return a*b;
    }
};

int main()
{
    C ob;
    ob.get_a(2);
    ob.get_b(3);
    cout<<"a*b = "<<ob.show()<<endl;
    return 0;
}


#include <iostream>//problem

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
        int get_b()
        {
            b=a;
            return b;
        }
};

class C:protected A
{
protected:
        int c;
public:
    int send()
    {
        c=a;
        cout<<a<<endl;
        return c;

    }
};

class D:public A
{
public:
    int show()
    {
        int d=a;
        return d;
    }
};

int main()
{
    B b;
    C c;
    D d;
    b.get_a(2);

    cout<<b.get_b()<<endl;
    cout<<c.send()<<endl;
    cout<<d.show()<<endl;

    cout<<"3a+4a+5a = "<<b.get_b()+c.send()+d.show()<<endl;

    return 0;
}

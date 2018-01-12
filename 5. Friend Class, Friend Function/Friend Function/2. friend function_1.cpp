#include <iostream>

using namespace std;

class A;
class B
{
    int m;
public:
    B()
    {
        m=0;
    }
    void get_dataB(int x)
    {
       m=x;
    }
    void showmB(A k);
};

class A
{
    int n;
public:
    A()
    {
        n=0;
    }
    void get_dataA(int x)
    {
       n=x;
    }

    friend void B:: showmB(A k);
};

void B :: showmB(A k)
{
    cout<<"m = "<<m<<"  n = "<<k.n<<endl;
}

int main()
{
    A a;
    B b;
    a.get_dataA(30);
    b.get_dataB(50);
    b.showmB(a);

    return 0;
}

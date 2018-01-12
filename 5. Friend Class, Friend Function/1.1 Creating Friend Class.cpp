#include <iostream>

using namespace std;

class B;
class A
{
    int m=20,n=30;
public:
    void get_data()
    {
       m=50;
    }
    friend B;
};

class B
{
    int y=30;
public:
    int print(A k)
    {
        cout<<"m = "<<k.m<<endl;
        cout<<"n = "<<k.n<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"m + n + y = "<<k.n+k.m+y<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.print(a);

    return 0;
}

#include <iostream>

using namespace std;

class A
{
    protected:
    //private:/*No output*/
        int a,b;
    public:
        void get_a(int ax)
        {
            a=ax;
        }
        void get_b(int bx)
        {
            b=bx;
        }
};
class B:public A
{
public:

    int show()
    {
        return a*b;
    }
};

int main()
{
    B ob;
    ob.get_a(2);
    ob.get_b(3);
    cout<<"a*b = "<<ob.show()<<endl;
    return 0;
}

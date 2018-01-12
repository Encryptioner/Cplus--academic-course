#include<iostream>
#include<cstring>
using namespace std;
class base
{
private:
    int tax;
public:
    base(int x)
    {
        tax=x;
    }
    friend void show(base);
};
void show(base c)
{
    cout<<"my tax = "<<c.tax;
}
int main(void)
{
    base b(10);
    show(b);
}

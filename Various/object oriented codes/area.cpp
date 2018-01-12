#include<iostream>

using namespace std;
class circle
{
private:
    int radious;
public:
    void input(int r)
    {
        radious=r;
    }
    void print()
    {
        cout<<"Radious="<<radious;
    }
    int area()
    {
        return 3.1416*radious*radious;
    }
};
int main()
{
    circle c1;
    c1.input(10);
    c1.print();
    cout<<"\nArea:"<<c1.area();

}
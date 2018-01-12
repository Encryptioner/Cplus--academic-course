#include<iostream>
using namespace std;

class h
{
private:
    int a;

public:
    h();
    ~h();
    void show();
};

h::h()
{
    cout<<"In constructor, ";
    a=10;
}
h::~h()
{
    cout<<"In destructor...\n";
}

void h::show()
{
    cout<<"a = "<<a<<endl<<endl;
}

int main()
{
    h ob;
    ob.show();
    return 0;
}

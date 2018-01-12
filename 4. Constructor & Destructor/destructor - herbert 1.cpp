#include<iostream>
using namespace std;

int a;

class myclass
{
    //int a;
public:
    myclass();
    ~myclass();
    int show();
};
myclass :: myclass()
{
    a=10;
    cout<<"In constructor\n";
    cout<<"a = "<<a<<"\n\n";

}

myclass :: ~myclass()
{
    cout<<"In Destructor\n";
    //a=12;
    //show();
    cout<<"a = "<<a<<"\n\n";
    //return a;
}


int myclass :: show()
{
    cout<<"now, a = "<<a<<"\n\n";
    return a;
}

int main()
{
    myclass ob;
    a=20;
    ob.show();
    a=30;
    //ob.show();
    //int a=100;
    //cout<<a;
    return 0;
}

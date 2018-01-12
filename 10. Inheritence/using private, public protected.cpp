#include<iostream>
#include<string.h>
using namespace std;
class A
{
private:
    int x;
protected:
    int y;
public:
    int z;
};

class B:public A
{
private:
    int w;
public:

    void set(int i)
    {y=i;}
   // void print()



};

int main()
{
    B b;
    //a1.z=10;
    b.set(10);
   // b.z=10;
}

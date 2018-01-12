#include <iostream>

using namespace std;

class A{
protected:
	int ax;
public:
	void getA(int x)
	{
	    ax=x;//ax=2;
	}
};

class B : virtual public A
{
protected:
	int bx;
public:
	void getB(int x)
	{
	    bx=x;//bx=3
    }
};

class C : virtual public A
{
protected:
	int cx;
public:
	void getC(int x)
	{
        cx=x;//cx=4
    }
};

class P:public C, public B
{
public:
	int volume()
	{
	    return ax*bx*cx;
    }
};

int main(void)
{
P p;

p.getA(2);
p.getB(3);
p.getC(4);

cout<<"volume = "<<p.volume()<<endl;

return 0;
}

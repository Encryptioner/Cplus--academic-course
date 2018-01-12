#include <iostream>
using namespace std;

class A{
protected:
	int ax;
public:
	void getA(int x)  { ax=x; }
};

class B{
protected:
	int bx;
public:
	void getB(int x) { bx=x;}
};

class P:public A, public B{
public:
	int area(){ 	return ax*bx; }
};

int main(void){
P p;
p.getA(2);p.getB(3);
cout<<"area="<<p.area()<<"   ";
}


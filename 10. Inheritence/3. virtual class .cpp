#include <iostream>

using namespace std;

class A{
protected:
	int ax;
public:
	void getA(int x){ ax=x; }
};

class B :  virtual public A{
protected:
	int bx;
public:
	void getB(int x){ bx=x; }
};

class C :  virtual public A{/* except using virtual code doesn't run..*/
protected:
	int cx;
public:
	void getC(int x){ cx=x; }
};

class P:public C, public B{
public:
	int volume(){ return ax*bx*cx; }
};

int main(void){
    P p;
    p.getA(2); p.getB(3); p.getC(4);
    cout<<"volume="<<p.volume()<<"   ";
}



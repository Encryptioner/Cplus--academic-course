
#include <iostream>
using namespace std;

class A
{ public:
  virtual void f(){ cout << "A" << endl; }
};
class B : public A
{ public:
  virtual void  f(){ cout << "B" << endl; }
};
int main()
{   A  a;
    B  b;
    A* p;
    B* q;
  p = &a;  p->f();
  p = &b;  p->f();
  q = &b;  q->f();
  q = (B*)&a;  q->f();
  q = &a;          // illegal
}

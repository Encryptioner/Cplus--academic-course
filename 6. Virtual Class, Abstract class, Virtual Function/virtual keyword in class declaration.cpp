#include <iostream>
using namespace std;

class  A{
    public:
  void show(){ cout << "class A" << endl; }
};

class  B : public A{
//class  B : virtual public A{
    public:
  void show(){ cout << "class B" << endl; }
};

class  C : public A{
//class  C : virtual public A{
    public:
  void show(){ cout << "class C" << endl; }
};

class D : public B, public C{
    public:
  void show(){ cout << "class D" << endl; }
};

int main (){
   A *a;
   D d;
   a = &d;
   a->show();      // class A
   return 0;
}

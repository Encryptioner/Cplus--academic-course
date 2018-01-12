#include<iostream>
using namespace std;


class Polygon{

	public:
	  int numVertices;
	  int xCoord, yCoord;

	public:
	   void set(int x, int y, int nV)
	   {
	       cout<<"x = "<<x<<endl;
	       xCoord=x;
	       yCoord=y;
	       numVertices=nV;
	       cout<<"xCoord="<<xCoord<<endl;
	   }
};


class Triangle : public Polygon{

	public:
	 int area(void)
	 {
        cout<<"xCoord="<<xCoord<<endl;
        return (xCoord)*(yCoord)*numVertices;
	 }
};


int main()
{
    Polygon p;
    Triangle t;
    int a=10,b=20;
    int c=15;

    p.set(a,b,c);

    cout<<"area = "<<t.area()<<endl;

    return 0;
}


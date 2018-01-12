#include<iostream>
using namespace std;


class Polygon{

	protected:
	  int numVertices;
	  float *xCoord, *yCoord;

	public:
	   void set(float *x, float *y, int nV)
	   {
	       xCoord=x;
	       yCoord=y;
	       numVertices=nV;
	   }
};


/*class Triangle : public Polygon{

	public:
	 float area()
	 {
	     //return (xCoord)*(yCoord)*(numVertices);
        //float d,e;
        //int f;
        d->xCoord;
        e->yCoord;
        f=numVertices;
        return (*xCrood)*(*yCrood)*numVertices;
	 }
};*/

class Triangle{

	protected:
	  int numVertices;
	  float *xCoord, *yCoord;

	public:
	   void set(float *x, float *y, int nV);
	   float area()
	   {
	       float *x=*xCrood;
           float *y=*yCrood;
           int nV=numVertices;
	       //return (*xCrood)*(*yCrood)*numVertices;
	       return (*x)*(*y)*nV;
	   }
};

int main()
{
    Polygon p;
    Triangle t;
    float a=10,b=20;
    int c=15;
    //float *m,*n;
    //m=&a;
    //n=&b;
    p.set(&a,&b,c);

    cout<<"area = "<<t.area()<<endl;

    return 0;
}


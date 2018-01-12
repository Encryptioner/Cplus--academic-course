#include<iostream>
using namespace std;

class mother{
	protected: int mProc;
	public: int mPubl;
	private: int  mPriv;
	//protected: int  mPriv;

};

//class daughter : protected mother{
class daughter : public mother{

	private: double dPriv;
	public: void dFoo ( );
};

class grandDaughter : public daughter {
	private: double gPriv;
	public: void gFoo ( );
};

void daughter :: dFoo ( ){
	//mPriv = 10;   //error
	mProc = 20;
	mPubl=30;
	//cout<<"mPriv ="<<mPriv;
	cout<<"\nmProc ="<<mProc;
	cout<<"\nmPubl ="<<mPubl;
};

int main()
{
    mother m;
    daughter d;
    grandDaughter g;

    d.dFoo();

    //cout<<"\nmProc ="<<d.mProc;
	cout<<"\nmPubl ="<<d.mPubl;
}

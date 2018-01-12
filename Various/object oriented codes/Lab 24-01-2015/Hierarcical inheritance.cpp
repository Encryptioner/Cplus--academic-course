#include<iostream>
using namespace std;
class baseA{
public:
    int i,j;
public:
    void set(int a,int b){i=a;j=b;}
    void show(){cout<<i<<" "<<j<<" "<<"\n";}
};
class baseB:public baseA{
    int k;
    public:
    void setk(){k=i*j;}
    void showk(){cout<<k<<"\n";}
};
class baseC:public baseA{
    int m;
    public:
    void setm(){m=i+j;}
    void showm(){cout<<m<<"\n";}

};
class baseD:public baseA{
    int n;
    public:
    void setn(){n=i/j;}
    void shown(){cout<<n<<"\n";}

};
int main()
{
    baseB ob1;
    baseC ob2;
    baseD ob3;
    ob1.set(6,3);
    ob1.show();
    ob1.setk();
    ob1.showk();
    ob2.set(23,4);
    ob2.setm();
    ob2.showm();
    ob3.set(3,5);
    ob3.setn();
    ob3.shown();
}

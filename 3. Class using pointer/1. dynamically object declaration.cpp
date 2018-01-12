#include<iostream>
using namespace std;
double m,n;

class Point
{
    public:
    double x;
    double y=n;
    int get_data()
    {
        cout<<"Enter : "<<endl;
        cin>>x;
    }
};

int main()

{
    Point pt;
    Point *p_pt;
    p_pt=&pt;
    Point *p = new Point;
    p->m = 253.7;
    p->n = -00.5;
    cout<<"x = "<<m<<"\ny = "<<n<<endl;
    return 0;
}

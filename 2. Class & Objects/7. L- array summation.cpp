#include<iostream>
using namespace std;

class array_sum
{
    int a[10],b[10],c[10];
    int i,n;
public:
    int getdata();
    int summation();
    int display();
};

int array_sum :: getdata()
{
    //int i,n;
    cout<<"Enter element no: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Input a"<<i<<":"<<endl;
        cin>>a[i];
        cout<<"Input b"<<i<<":"<<endl;
        cin>>b[i];
    }
}

int array_sum :: summation()
{
    for(i=1;i<=n;i++)
    {
    c[i]=a[i]+b[i];
    }

}

int array_sum :: display()
{
    cout<<"\n";
    //cout<<"a "<<"+"<<" b"<<  "sum"<<endl;
    for(i=1;i<=n;i++)
    {
        //cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl<<endl;
        //cout<<a[i]<<"\t"<<b[i]<<endl;
        cout<<c[i]<<"\t";
    }
}

int main()
{
    array_sum arr;
    arr.getdata();
    arr.summation();
    arr.display();
}

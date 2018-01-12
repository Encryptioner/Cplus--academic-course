#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[100];
    int i,n;
    cout<<"How many numbers do you want to add:";
    cin>>n;
    cout<<"Input the elements of array a:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Input the elements of array b:"<<endl;
    for(i=0;i<n;i++)
        cin>>b[i];
    cout<<"Addition array:"<<endl;
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        cout<<c[i]<<"\t";
    }
return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp;
    int a[10];
    cout<<"How many number? "<<endl;
    cin>>n;
    cout<<endl<<"Enter: "<<endl<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"Output: "<<endl<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

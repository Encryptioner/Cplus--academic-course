#include<iostream>
using namespace std;
int main()
{
 int i,j,a[10],b[10],c[10];
 cout<<"Enter the number of elements:"<<endl;
 cin>>j;
 cout<<"Enter the elements of first array:"<<endl;
 for(i=0;i<j;i++)
        cin>>a[i];
 cout<<"Enter the elements of second array:"<<endl;
 for(i=0;i<j;i++)
    cin>>b[i];
    for(i=0;i<j;i++)
 c[i]=a[i]+b[i];
 for(i=0;i<j;i++)
 cout<<"Output array is:"<<c[i]<<endl;
}

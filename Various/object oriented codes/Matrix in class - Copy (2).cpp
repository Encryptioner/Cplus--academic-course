#include<iostream>
using namespace std;
class aray{

public:
    int n,m,i,a[10],b[10],c[10];
    void get_input();
    void display();

};
void aray::get_input()
{
 cout<<"Enter the number of elements:"<<endl;
 cin>>n;
 cout<<"Enter the number of elements:"<<endl;
 cin>>m;
 if(m!=n)
    cout<<"Summation is impossible."<<endl;
 else
 {
 cout<<"Enter the elements:"<<endl;
 for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0; i<n; i++)
        c[i]=a[i]+b[i];
 }


};
void aray::display()
{
  cout<<"Output aray is:"<<endl;
  for(i=0;i<n;i++)

    cout<<c[i]<<endl;
};
int main()
{
    aray c;
    c.get_input();
    c.display();
}


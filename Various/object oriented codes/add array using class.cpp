#include<iostream>
using namespace std;
class array
{
private:
    int n,i,a[100],b[100],c[100];
public:
    void input_data();
    void output_data();
   // void sum();
};
void array::input_data()
{
    cout<<"How many elements:"<<endl;
    cin>>n;
    cout<<"Input array a:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Input array b:"<<endl;
    for(i=0;i<n;i++)
        cin>>b[i];
}
void array::output_data()
{
    cout<<"Array output:"<<endl;
   // sum();
    for(i=0;i<n;i++)
        cout<<a[i]+b[i]<<"\t";
}
/*int array::sum()
{
    for(i=0;i<n;i++)
        cout<<a[i]+b[i]<<"\t";

}*/
int main()
{
    array a;
    cout<<"Input array:\n";
    a.input_data();
    a.output_data();
     return 0;
}

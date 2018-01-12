#include<bits/stdc++.h>
#include<functional>
using namespace std;

int main()
{
    int i,j;
    //copying array to vector..
    int a[5]={1,2,3,4,5};
    int b[5];

    vector<int>v1(a,a+5);//here 5 means the size of array
    for(i=0;i<5;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"\n";
    rotate(v1.begin(),v1.begin()+2,v1.end());
    for(i=0;i<5;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"\n";
    //cout<<"\n"<<v1.front()<<" "<<v1.end()<<endl; // vector doesn't support front and end
    //copying vector to vector..
    vector< int > v, t;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );
    t = v; // copying
    for(int i=0; i<t.size(); i++)
        cout << t[i] << endl;
    cout<<"\n";
    fill(t.begin(),t.begin()+2,10);
    for(int i=0; i<t.size(); i++)
        cout << t[i] << endl;
    cout<<"\n";
    fill_n(t.begin()+3,1,10);
    remove(t.begin(),t.end(),3);
    for(int i=0; i<t.size(); i++)
        cout << t[i] << endl;
    cout<<"\n";
    //cout<<"\n"<<t.front()<<" "<<t.end()<<endl;
    reverse_copy(&a[0],&a[5],&b[0]);
    cout<<"\nprinting b : \n";
    for(int i=0; i<5; i++)
        cout << b[i] << endl;
    random_shuffle(&b[0],&b[5]);
    cout<<"\nprinting b : \n";
    for(int i=0; i<5; i++)
        cout << b[i] << endl;

}

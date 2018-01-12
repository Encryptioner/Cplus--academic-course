#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector< vector< int > > v(1001,vector<int>(0));
    vector<int>v1(10,5);
    vector< vector< int > > v3(10,vector<int>(10,8));
    //vector< vector< int > > v;
    int n,i,j,k,arr[10][10]={5};
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<11;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=25;i++)
    //for(i=1;i<=100000;i++)
    {
        cin>>n;//highest value of n is 5, but total input is 25(say)
        v[n].push_back(i);
        //k=v[n].size();
        //cout<<" "<<k<<" "<<v[n][k-1]<<endl;
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        k=v[i].size();
        cout<<"Index of "<<i<<" = ";//"0 isn't counted"
        for(j=0;j<k;j++)//same n can be inputted 25 times
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

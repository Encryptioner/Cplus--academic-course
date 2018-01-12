#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    const long long int N=600000,S=10;//length of tulpes x and y, sparseness factor
    long long int k;
    vector<double>x(N),y(N);
    for(k=0;3*k*S<N;++k)
    {
        x[3*k*S]=1.0;
        if(5*k*S<N)
        {
            y[5*k*S]=1.0;
        }
    }
    double sum=0.0;
    for(k=0;k<N;++k)
    {
        sum+=x[k]*y[k];
    }
    cout<<sum<<endl;
    map<long long int,double>X,Y;
    for(k=0;3*k*S<N;++k)
    {
        X[3*k*S]=1.0;
        if(5*k*S<N)
        {
            Y[5*k*S]=1.0;
        }
    }
    /*for(k=0;k<100;++k)
    {
        cout<<X[k]<<" "<<Y[k]<<endl;
    }*/
    map<long long int,double>::iterator ix,iy;
    for(sum=0.0,ix=X.begin();ix!=X.end();++ix)
    {
        long long int K=ix->first;
        iy=Y.find(K);
        if(Y.find(K)!=Y.end())
        {
            //sum+=X[K]*Y[K];
            sum+=ix->second*iy->second;
        }
    }
    cout<<sum<<endl;
}

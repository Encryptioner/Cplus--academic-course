#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;

int main()
{
    const int N=5;
    vector<int>v0;

    for(int i=0;i<N;i++)
    {
        v0.push_back(i);
    }
    vector<int>v1=v0;
    random_shuffle(v1.begin(),v1.end());
    for(int i=2;i<N;i++)
    {
        push_heap(v1.begin(),v1.begin()+i);
    }
    for(int i=0;i<N;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"\n";
    for(int i=5;i>=2;i--)
    {
        pop_heap(v1.begin(),v1.begin()+i);
    }
    for(int i=0;i<N;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"\n";
    random_shuffle(v1.begin(),v1.end());
    make_heap(v1.begin(),v1.end());
    sort_heap(v1.begin(),v1.end());
    for(int i=0;i<N;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"\n";
    //vector<int>iterator::k;
    max_element(v1.begin(),v1.end());


    //cout<<*k<<endl;
    //cout<<min_element(v1.begin(),v1.end());
    partial_sum(&v1[0],&v1[N],&v0[0]);
    for(int i=0;i<N;i++)
    {
        cout<<v0[i]<<endl;
    }
    cout<<"\n";

    int result=inner_product(&v1[0],&v1[N],&v0[0],0);//v1[0]*v0[0]+v1[1]*v0[1]+
    cout<<result<<endl;

    result=inner_product(&v1[0],&v1[N],&v0[0],1,multiplies<int>(),plus<int>());//v1[0]+v0[0] * v1[1]+v0[1] *
    cout<<result<<endl;
}


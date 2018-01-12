#include<iostream>
#include<cstdio>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n],b[n];//n pore declare korle gives runtime error on starting
    //array,vector,deque gives random access so sort function can be used. lost doesn't gives random access
    vector<double>v(n);//n pore declare korle cin,cout thik vabe kaj kore kintu sort(gives 0),size ber korte pare na
    deque<double>d(n);//n pore declare korle runtime error dekhai
    list<double>list1(n);//n pore declare korle continuous man nite thake

    cout<<v.size()<<" "<<d.size()<<" "<<list1.size()<<endl;
    //n=n+2;//vector sort only  first previous n element, cin er shomoy extra enter dile runtime error dei but deque doesn't do any problem. list only takes previous n elements
    //cout<<v.size()<<" "<<d.size()<<" "<<list1.size()<<endl;//size is same as previous n
    //printf("%lld\n",&list1);
    //shob kisur initial value zero
    for(double &i:list1)
    {
        cin>>i;
    }
    printf("\n");
    list1.sort();
    for(double &i:list1)
    {
        cout<<i<<endl;
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>v[i]>>d[i];
    }
    //cout<<v.find(5)<<endl;
    replace(d.begin(),d.end(),5,15);//replace all value equal to 5 with 15
    copy(&a[0],&a[n],&b[0]);//copy array a to b;
    //copy(d.begin(),d.end(),v.begin());//OK
    //copy(d.begin(),d.end(),back_inserter(v));//doesn't work
    printf("\n");
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<v[i]<<" "<<d[i]<<endl;
    }
    printf("\n");
    sort(&a[0],&a[n]);
    sort(v.begin()+2,v.end());//doesn't sort first 2 element
    sort(d.begin(),d.begin()+n-2);//sort only first 3 element
    printf("\n");
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<v[i]<<" "<<d[i]<<endl;
    }
    printf("\n");

    bool found=binary_search(v.begin(),v.end(),5);
    if(found==true)
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"false\n";
    }
    return 0;
}

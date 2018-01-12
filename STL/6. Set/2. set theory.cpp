#include<bits/stdc++.h>

using namespace std;

int main()
{
    //vector<char> v1=make<vector<char>>("abcde"),v1=make<vector<char>>("aeiou");
    vector<char> v1{'a','b','c','d','e'},v2{'a','e','i','o','u'};
    set<char>s3;
    vector<char> setUnion,setIntersection,setDifference;
    set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(setUnion));
    set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(s3,s3.end()));
    for(int i=0;i<setUnion.size();i++)
    {
        cout<<setUnion[i];fd
    }
    cout<<"\n\n";
    for(const char &i : s3)
    {
        cout<<i;
    }
    cout<<"\n\n";
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(setIntersection));
    for(int i=0;i<setIntersection.size();i++)
    {
        cout<<setIntersection[i];
    }
    cout<<"\n\n";
    set_symmetric_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(setDifference));
    for(int i=0;i<setDifference.size();i++)
    {
        cout<<setDifference[i];
    }
    cout<<"\n\n";
}

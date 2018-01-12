#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<string,long long int>directory;//prothome 0 deoa jabe na
    vector<string>s;
    //map<string,string>directory;
    directory["Abbu"]=641684964964964;//"+8801748734724";
    directory["Ammu"]=555555555;//"6546";
    directory["Ami"]=41;//"054";

    for(map<string,long long int>:: iterator it=directory.begin();it!= directory.end();++it)
    //BOOST_FOREACH
    {
        s.push_back(it->first);
        cout<<it->first<<endl;
    }
    printf("\n");
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }

    string name;

    while(cin>>name)
    {
        if(directory.find(name)!=directory.end())
        {
            cout<<"The Phone Number for "<<name<<" is "<<directory[name]<<"\n";
        }
        else
        {
            cout<<"No listing for "<<name<<endl;
        }
    }
    return 0;
}

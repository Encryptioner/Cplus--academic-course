#include<iostream>
#include<map>
#include<cstdio>
using namespace std;

int main()
{
    map<string,long long int>mymap;

    mymap["Abbu"]=641684964964964;//"+8801748734724";
    mymap["Ammu"]=555555555;//"6546";
    mymap["Ami"]=41;

    /*for(auto &x:mymap)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }*/
    printf("\n");

    map<string,long long int>::iterator it;
    it=mymap.find("Abbu");
    if(it!=mymap.end())
    {
        mymap.erase(it);
    }
    cout<<mymap.find("Ammu")->first<<" "<<mymap.find("Ammu")->second<<endl;
    cout<<mymap.find(41)->first<<" "<<mymap.find(41)->second<<endl;
    //cout<<mymap.find("Abbu")->first<<" "<<mymap.find("Abbu")->second<<endl;
    return 0;
}

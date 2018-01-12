#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<cassert>
#include<algorithm>

using namespace std;

int main()
{
    string s1="mark twain";
    int n;
    reverse(s1.begin(),s1.end());
    assert(s1=="niawt kram");
    {
        cout<<"ok\n";
    }
    /*assert(s1=="niawt kramf");
    {
        cout<<"ok\n";
    }*/
    char array1[]="mark twain";
    n=strlen(array1);
    reverse(&array1[0],&array1[n]);
    assert(string(array1)=="niawt kram");
    cout<<"ok\n";
    /*reverse(&array1[n],&array1[0]);
    assert(string(array1)=="niawt kram");
    cout<<"ok\n";*/
    //array1[]="mark twain";//doesn't compile if this line exists
    //vector<char> v1=make<vector<char>>("niawt kram");
    vector<char> v1(array1,array1+n);//in same way list,deque
    //for(char n:v1)
    for(int n:v1)//int n prints ascii value of each character
    {
        cout<<n<<endl;
    }
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<endl;
    }
    /*assert(v1(array1,array1+n)=="mark twain");
    cout<<"ok\n";*/
    char array2[10]="     ";
    //vector< vector< double > > v2(array2,array2+5);//"" er moddhe jotogulo character ase toto row porjonto execute korte pare
    vector< vector< double > > v2(array1,array1+n);//int nile 0, char nile null dekhai
    //for(char n:v2)
    /*for(int n:v2)//int n prints ascii value of each character
    {
        cout<<n<<endl;
    }*/
    for(int i=0;i<v2.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            cout<<v2[i][0]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<1;j++)
        {
            cin>>v2[i][j];
        }
        //cout<<"\n";
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<"\n";
    }
    vector< vector< int >> v3(5);
    cout<<v3.size()<<endl;
    vector< vector< int >> v4[3][2];
    /*for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>v4[i][j];
        }
        //cout<<"\n";
    }*/
    return 0;
}


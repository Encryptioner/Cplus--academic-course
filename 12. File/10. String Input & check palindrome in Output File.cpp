#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin("input10.txt");
    ofstream fout("output10.txt");
    int x;
    while(fin>>x)
    {
        int a=0,b=0,n=x;
        //while(b!=0)
        while(n>0)
        {
            b=n%10;
            a=a*10+b;
            n=n/10;
        }
        //cout<<x<<endl;
        //cout<<a<<endl;
        if(a==x)
        {
            fout<<"Palindrome\n";
        }
        else
        {
            fout<<"Not Palindrome\n";
        }
    }
    return 0;
}

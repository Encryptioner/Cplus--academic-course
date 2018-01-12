#include<iostream>
#include<fstream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int n;
    ifstream p1;
    p1.open("cse8.input1.txt");
    p1>>n;
    ofstream p2;
    p2.open("cse8.output1.txt");
    p2<<fact(n);
    return 0;
}

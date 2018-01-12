#include<bits/stdc++.h>
using namespace std;

void compress(double input[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<endl;
    }
    map<double,int>mymap;
    int assign=0,compressed[100],c=0;//array size;
    //int n=sizeof(input)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        double x=input[i];
        if(mymap.find(x)==mymap.end())//x not yet compressed
        {
            mymap[x]=assign;
            printf("Mapping %f with %d\n",x,assign);

            assign++;
            //cout<<mymap[assign]<<endl;
        }
        //x=mymap[x];
        //compressed[c++]=x;
        //compressed[c++]=assign-1;
        int a=mymap[x];
        compressed[c++]=a;
    }
    printf("Compressed array: \n");
    for(int i=0;i<n;i++)
    {
        //cout<<mymap[i]<<" ";
        printf("%d ",compressed[i]);
        puts("");
    }

}


int main()
{
    double input[]={-102,1,13456.5589,13456.5589,-102,6666.6668,13456.5589,6666.6668,-102,1,-2};
    int n=sizeof(input)/sizeof(double);
    compress(input,n);//n na pathale map kaj kore na
}

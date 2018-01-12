#include<iostream>
#include<cstdio>
#include<vector>
#include<cassert>
#include<numeric>

using namespace std;

double mult(double x,double y)
{
    return x*y;
}

int main()
{
    double x[5]={2,3,5,7.5202,11};

    vector<double>v1(&x[0],&x[5]);//&x[4] nile last element 11 hoy. accumulate function last element er ager porjonto sum kore
    for(int i=0;i<=5;i++)
    {
        cout<<*(&x[i])<<" ";
    }

    double sum=accumulate(v1.begin(),v1.end(),0.0);//0.0 is needed for double. here sum=sum+0.0

    cout<<sum<<endl;//print 4 digit after decimal
    printf("%.8f\n",sum);

    double product=accumulate(v1.begin(),v1.end(),1.0,mult);//multiply by 1.0, using mult function
    cout<<product<<endl;
    printf("%.30f\n",product);

    double product2=accumulate(v1.begin(),v1.end(),1.0,multiplies<double>());
    cout<<product2<<endl;
    printf("%.8f\n\n",product2);

    float small=(float)1.0/(1<<26);//(float)1.0/(1<<0)=1,(1<<1)=.5,(1<<2)=.25 or 1/(2^2),(1<<3)=.125,(float)1.0/(2<<2)=.125 or 1/(2^(2+1)), (float)1.0/(3<<1)=1/(3*2)
    cout<<small<<endl;;
    printf("%.30f\n",small);
    float y[5]={1.0,2*small,3*small,small,small};

    vector<float>v2(&y[0],&y[5]);
    for(float &i:v2)
    {
        cout<<i<<endl;
    }
    printf("\n");
    vector<float>::iterator i;
    cout.precision(15);
    for(i=v2.begin();i!=v2.end();++i)
    {
        cout<<*i<<endl;
    }
    printf("\n");
    float summation1=accumulate(v2.begin(),v2.end(),(float)0.0);
    cout<<"Sum from left ="<<summation1<<endl;
    float summation2=accumulate(v2.rbegin(),v2.rend(),(float)0.0);
    cout<<"Sum from right ="<<summation2<<endl;//more accurate
}

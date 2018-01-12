#include<iostream>
#include<string.h>

using namespace std;

class counter
{
private:
    int count;
public:
    counter(){count=0;}
    int get_count(){return count;}
    void operator++(){count++;}
};
int main()
{
    counter c1,c2;
    ++c1;
    ++c1;
    cout<<"c1= "<<c1.get_count()<<endl;
    return 0;

}

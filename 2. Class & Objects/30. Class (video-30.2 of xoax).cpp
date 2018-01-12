#include <iostream>
//using namespace std;
class cnote
{
public:/*If we don't use this program won't run.. because member will be private.. */
    int mypitch;
    double mduration;
};
class cmelody
{
public:
    cnote mynote[20];
    int ncount;

};

int main()
{
    using namespace std;
    cmelody qninth={{{2,0.25},{2,0.25},{3,0.25},{4,0.25},
    {4,0.25},{3,0.25},{2,0.25},{1,0.25},
    {0,0.25},{0,0.25},{1,0.25},{2,0.25},
    {2,0.375},{1,0.125},{1,0.5}},15};
    for(int index=0;index<qninth.ncount;++index)
    {
        cout<<qninth.mynote[index].mypitch<<" , "<<qninth.mynote[index].mduration<<endl;
    }
    return 0;
}


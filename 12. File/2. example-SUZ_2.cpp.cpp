#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream fp;
    //int ax[10]={1,2,3,4,5,6,7,8,9,10};
    int i,bx[10];

    fp.open("cse3.txt", ios::out | ios::in | ios::binary);
    //fp.write((char*) ax,sizeof(ax));
    fp.read((char*) bx,sizeof(bx));
    for(i=0;i<10;i++)
    {
        cout<<bx[i]<<endl;
    }
    fp.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void check(fstream &file);

int main(void)
{
    string s;
    char ax[20];
    int i,nx;
    nx=10;
    fstream fp;
    //fstream fp("cse1.txt",ios::out);
    //fstream fp("cse1.txt",ios::out | ios ::in);
    //fstream fp("cse1.txt",ios::in);
    //fp.open("cse1.txt",ios::in);
    fp.open("cse1.txt",ios::in);
    /*if(fp.fail())
    {
        cout<<"ERROR !!\n";
    }*/

    //fp<<"CSE RUET_1\nAshik is a magi\n";
    //s=123156;
    //for()
    cout<<"before reading nx\n\n";
    check(fp);
    fp>>nx;
    cout<<"\nafter reading_1 nx\n\n";
    check(fp);
    fp>>nx;
    cout<<"\nafter reading_2 nx\n\n";
    check(fp);
    fp.close();
    cout<<"\nafter reading_3 nx\n\n";
    check(fp);
    return 0;
}

void check(fstream &file)
{
    cout<<"eof bit = "<<file.eof()<<endl;
    cout<<"bad bit = "<<file.bad()<<endl;
    cout<<"fail bit = "<<file.fail()<<endl;
    cout<<"good bit = "<<file.good()<<endl;
}

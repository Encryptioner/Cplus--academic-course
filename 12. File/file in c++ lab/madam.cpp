#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int num;
    ifstream in;
    ofstream out;

    in.open("in.txt");
    out.open("out.txt");
    in>>num;
    out<<num;

    in.close();
    out.close();
    return 0;
}

//int main()


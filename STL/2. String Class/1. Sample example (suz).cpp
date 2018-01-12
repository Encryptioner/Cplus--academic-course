#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a,b,c,d;

    a= "My name ";
    b="is Ankur";

    cout<<"a's length = "<<a.length()<<endl<<endl;
    cout<<"b's length = "<<b.length()<<endl<<endl;
    cout<<"c's length = "<<c.length()<<endl<<endl;

    c=a+b;
    cout<<"c = "<<c<<endl<<endl;
    a+=c;
    cout<<"now a = "<<a<<endl<<endl;
    cout<<"a's length = "<<a.length()<<endl<<endl;
    cout<<"b's length = "<<b.length()<<endl<<endl;
    cout<<"c's length = "<<c.length()<<endl<<endl;

    cout<<"a's size = "<<a.size()<<endl<<endl;
    cout<<"b's size = "<<b.size()<<endl<<endl;

    d=c.substr(2,8);
    cout<<"d = "<<d<<endl<<endl;//space count kore..

    cout<<"find = "<<c.find("name")<<endl<<endl;//show the 1st index of letter of finding substrin
    cout<<"find = "<<c.find("xxxx")<<endl<<endl;

    return 0;
}

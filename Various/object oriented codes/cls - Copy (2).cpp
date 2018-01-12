#include<iostream>
#include<stdio.h>

#include<string.h>

using namespace std;
class student{
public:
    char Name[10];
    int Roll;
    float CGPA;
    void get_input()

    {
        cout<<"Name:"<<endl;
        cin>>(Name);
        cout<<"Roll:"<<endl;
        cin>>Roll;
        cout<<"CGPA:"<<endl;
        cin>>CGPA;
    }
    void display()
    {
        cout<<"Name:"<<Name<<"\tRoll:"<<Roll<<"\tCGPA:"<<CGPA<<endl;
    }
};
    int main()
    {
        student a;
        a.get_input();
        a.display();
    }



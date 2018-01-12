#include<iostream>
#include<cstring>
using namespace std;

class student
{
//private: /* when nothing is declared. in class, member is private*/
        string name;
        int roll;
        double marks;
    public:
        void getdata();
        void display();
};

void student :: getdata()
{
    cout<<"Enter name: "<<endl;
    getline(cin,name);

    cout<<"Enter roll: "<<endl;
    cin>>roll;
    cout<<"Enter marks: "<<endl;
    cin>>marks;
}

void student :: display()
{
    cout<<"Name\tRoll\tMarks"<<endl;
    cout<<name<<"\t"<<roll<<"\t"<<marks<<endl;
}

int main()
{
    student first;
    first.getdata();
    first.display();
    return 0;
}

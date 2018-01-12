#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:
    string st;
    int roll;
    float cgpa;
public:
    void getdata();
    void display();
};
void student::getdata()
{
    cin>>st;
    cin>>roll;
    cin>>cgpa;
}
void student::display()
{
    /*cout<<endl<<"Output is:"<<endl<<"Name:"<<st<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Cgpa:"<<cgpa<<endl<<endl;*/
    cout<<st<<"\t"<<roll<<"\t"<<cgpa<<endl;
}
int main()
{
    student p[100];
    int n,i;
    cout<<"How many students:";
    cin>>n;
    cout<<"Input the students information:";
    for(i=0;i<n;i++)
    {
        p[i].getdata();
    }
    cout<<"Name\tRoll\tcgpa:\n";
     for(i=0;i<n;i++)
    {
        p[i].display();
    }

}
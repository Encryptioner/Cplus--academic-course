#include<iostream>
using namespace std;
class student
{
private:
    char st[20];
    int roll;
    float cgpa;
public:
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"Enter the name,roll and cgpa:\n";
    cin>>st;
    cin>>roll;
    cin>>cgpa;

}
void student::display()
{
    cout<<endl<<"Output is:"<<endl<<"Name:"<<st<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Cgpa:"<<cgpa<<endl<<endl;
}
int main()
{
    student p;
    p.getdata();
    p.display();
    return 0;
}

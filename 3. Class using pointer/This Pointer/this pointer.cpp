#include <iostream>
#include <cstring>

using namespace std;

class person
{
    char name[20];
    float age;
 public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age=a;
    }

person great(person &x)
{
    cout<<"age = "<<age<<endl;
    if(x.age>=age)
    {
        return x;
    }
    else
    {
        return *this;
    }
}

void display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

};

int main()
{
    person p1("John",37.50),
            p2("Ankur",29.0),
            p3("Hebber",40.2);
    person p=p1.great(p3);
    cout<<"Elder person is : \n";
    p.display();
    p=p1.great(p2);
    cout<<"Elder person is : \n";
    p.display();

    return 0;
}

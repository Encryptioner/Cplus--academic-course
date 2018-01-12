#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
class account
    {
    public:

    char name[25];
    int account_id;
    float balance;

    public:

     void create(char,int,float);
     void display();
     void debit(account r1[],int);
     void credit(account r2[],int);
     void search(int,int );
    void sort(account r3[],int);
    void sort(account r4[],double);
};
void account::create(char *a,int id,float b)
{
    strcpy(name,a);
    account_id=id;
    balance=b;
}
void account::display()
{
  cout<<"name:"<<name<<"\n"<<"acc.no.:"<<account_id<<"\n"<<"balance:"<<balance<<endl;
}

void account ::search(int id,int n)
{
    for(int i=0;i<n;i++)
    {
        if(id==account_id)
        {
            cout<<"name:"<<name<<"\nbalance:"<<balance<<endl;
        break;
        }
        else{
        cout<<"no such account";
        break;
        }
    }
}
void sort(account r3[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      if(x[i].balance<x[j].balance)
      swap(r[i],r[j]);
  }
 for(i=0;i<n;i++)
 { printf("[%d].\n",i+1);
 cout<<"name:"<<r[i].name<<"\n"<<"acc.no.:"<<r[i].account_id<<"\n"<<"balance:"<<r[i].balance<<endl;
 cout<<endl;
}
}
void sort(account r4[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      if(r[i].account_id<r[j].account_id)
      swap(r[i],r[j]);
  }
 for(i=0;i<n;i++)
 { printf("[%d].\n",i+1);
 cout<<"name:"<<r[i].name<<"\n"<<"acc.no.:"<<r[i].account_id<<"\n"<<"balance:"<<r[i].balance<<endl;
 cout<<endl;
}
}

void account::debit(account r1[],int n)
{
     int in_id,tk;
    cout<<"enter account id to add money:";
    cin>>in_id;
    cout<<"how much TK?";
    cin>>tk;
    int i;
    for(i=0;i<n;i++)
    if(in_id==r1[i].account_id)
    { r1[i].balance+=tk;

    }
}
void account::credit(account r2[],int n)
{
    int in_id,tk;
    cout<<"enter account id to get money:";
    cin>>in_id;
    cout<<"how much TK?";
    cin>>tk;
    int i;
    for(i=0;i<n;i++)
    if(in_id==r2[i].account_id)
    {   if(r2[i].balance<=500)
    cout<<"Sorry insufficient balance!";
    else
    {   cout<<"Welcome to exchange..........";
        r2[i].balance-=tk;
    }

    }
}

int main()
{ int n,i;

  cout<<"how many accounts:";
  cin>>n;
   account r[50];
    char name[25];
    int id;
    float balance;
    for(i=0;i<n;i++)
    {   printf("[%d]",i+1);
        printf("\n---");
        cout<<"\nname:";
       cin>>name;
       cout<<"\nid:";
       cin>>id;
       cout<<"\nbalance:";
       cin>>balance;
       r[i].create(name,id,balance);
       cout<<endl<<endl;

    }
    int s;
    cout<<"press 1 to all accounts\npress 2 to search a account\npress 3 to sort according to balance\npress 4 to sort according to account balance \n 5 to debit and \n press 6 to credit:\n";
    cin>>s;
    switch(s)
    {
    case 1:
    for(i=0;i<n;i++)
    { r[i].display();
      cout<<"\n\n";

    }
    break;
    case 2:
    {
    int in_no;
    cout<<"search a account via->ACCOUNT ID:";
    cin>>in_no;
    for(int i=0;i<n;i++)
    {
        r[i].search(in_no,n);
    }
    }
    break;

    case 3:
    {
    cout<<"Account sorting with respect to their balance:\n\n";
    sort(r,n);
    }
    break;
   case 4:
    {
    cout<<"Account sorting with respect to their account no:\n\n";
    sort(r,n);
    }
    break;
    case 5:
    {
    printf("[Debit to account]\n");

    r[0].debit(r,n);
    }
    break;
    case 6:
    {
    r[0].credit(r,n);
    }
    break;
    default:
    cout<<"you have pressed wrong keyword!!";
    break;

    }



}


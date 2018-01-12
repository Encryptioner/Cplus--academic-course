#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

class account{
        char name[20];
        int acc_no;
        float balance;
    public:
        void create();
        void search();
        void deposite_balance();
        void withdraw_balance();
        void sort(int x);
        void sort(double y);
        void display();
        void exit();
};
int c=0;
void account :: create ()
{
    cout << "Enter name: ";
    cin>>name;
    cout << "Account No.: ";
    cin>>acc_no;
    cout << "Balance: ";
    cin>>balance;
}
account lst[500], temp;

void account :: search()
{
    int n, i=0, flag=0;
    cout<<"Enter account no.: ";
    cin>>n;

    while(lst[i].acc_no) {
        if(lst[i].acc_no==n) {
            printf("Name        Account No.         Balance\n");
            printf("-----       -----------        ---------\n");
            printf("%3s        %4d               %.2f\n", lst[i].name, lst[i].acc_no, lst[i].balance);
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        cout << "Not found..." << endl;

}

void account :: deposite_balance()
{
    int i=0, n, amount, flag=0;
    float pre;
    cout << "Enter your account no.: ";
    cin >>n;

    while(lst[i].acc_no) {
        if(lst[i].acc_no == n) {
            cout << "Enter the amount you wanna deposite: ";
            cin>>amount;
            pre=lst[i].balance;
            lst[i].balance+=amount;
            printf("Name        Account No.         Pre. Balance         Balance\n");
            printf("-----       -----------        -------------        ----------\n");
            printf("%3s        %4d               %.2f             %.2f\n", lst[i].name, lst[i].acc_no,pre, lst[i].balance);
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        cout << "Not found";
    }
}

  void account :: withdraw_balance()
{
    int i=0, n,flag=0,amount;
    float pre;
    cout<<"Enter Your Account number: ";
    cin>>n;

    while(lst[i].acc_no) {
        if (lst[i].acc_no==n) {
            cout<<"Enter Amount: ";
            cin>>amount;
            pre=lst[i].balance;
            lst[i].balance-=amount;
            if(lst[i].balance<500) {
                cout<<"Sorry!! Insufficient Balance."<<endl;
                lst[i].balance+=amount;
            }
            printf("Name        Account No.         Pre. Balance         Balance\n");
            printf("-----       -----------        -------------        ----------\n");
            printf("%3s        %4d               %.2f            %.2f\n", lst[i].name, lst[i].acc_no,pre, lst[i].balance);
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        cout<<"Not Found\n"<<endl;
}

void account :: sort(int x)
{
    int i, j;

    for(i=0; i<c-1; i++) {
        for(j=i+1; j<c; j++) {
             if(lst[i].acc_no>lst[j].acc_no) {
                    temp=lst[i];
                    lst[i]=lst[j];
                    lst[j]=temp;
                }
        }
    }
    printf(" Name        Account No.         Balance\n");
    printf("-----        -----------         --------\n");
    for(i=0; i<c; i++) {
        printf("%3s        %4d               %.2f\n", lst[i].name, lst[i].acc_no, lst[i].balance);
    }
}

void account :: sort(double y)
{
    int i, j;

    for(i=0; i<c-1; i++) {
        for(j=i+1; j<c; j++) {
             if(lst[i].balance<lst[j].balance) {
                    temp=lst[i];
                    lst[i]=lst[j];
                    lst[j]=temp;
                }
        }
    }
    printf(" Name        Account No.         Balance\n");
    printf("-----        -----------         --------\n");
    for(i=0; i<c; i++) {
        printf("%3s        %4d               %.2f\n", lst[i].name, lst[i].acc_no, lst[i].balance);
    }
}

void account :: display()
{
    int i;
    printf(" Name        Account No.         Balance\n");
    printf("-----        -----------         --------\n");
    for(i=0; i<c; i++) {
        printf("%3s        %4d               %.2f\n", lst[i].name, lst[i].acc_no, lst[i].balance);
    }
}

void account :: exit()
{
    cout << "Thank You....!";
}
static int  count=0;
int main()
{
    int n;
    printf("######## MENU ########\n\n");

        printf("\n1 for create account\n2 for search any account\n3 for deposite balance\n4 for withdrow balance\n5 for sorting by account no\n6 for sorting by balance\n7 for display\n8 for exit\n");
        while(1) {
        cout<<"\nEnter your choice: ";
        cin>>n;
        if(n==8) {
            lst[count].exit();
            break;
        }

        switch(n) {
            case 1: {lst[count].create(); c++; count++; break;}
            case 2: lst[count].search(); break;
            case 3: lst[count].deposite_balance(); break;
            case 4: lst[count].withdraw_balance(); break;
            case 5: lst[count].sort(1); break;
            case 6: lst[count].sort(1.0); break;
            case 7: lst[count].display(); break;
            default: cout << "You've entered wrong choice...!!\n";
        }
    }
}



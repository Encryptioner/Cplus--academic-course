#include <iostream>
using namespace std;
class bank
{
    private:
        char name[20];
        int ac_num;
        char type[20];
        int d;
        int w;
        float balance;
    public:
        void getinfo(bank a[500]);
         void display(bank a[500]);
         void deposit(bank a[500]);
         void withdraw(bank a[500]);
         void bsort(bank a[500]);
         void search(bank a[500]);
         void exit();
}a[500],obj;
static int n;
int main()
{
    int i,c,m=1;
    cout<<"Enter Number="<<endl;
    cin>>n;
    while(m)
    {
        cout<<"\nEnter Your Choice="<<endl;
        cout<<"Choice List\n"<<endl;
        cout<<"1.Create Account"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdraw"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Balance Sort"<<endl;
        cout<<"6.Search"<<endl;
        cout<<"7.Exit"<<endl;
        cin>>c;

        switch(c)
            {
            case 1:
                obj.getinfo(a);
                break;
            case 2:
                obj.deposit(a);
                break;
            case 3:
                obj.withdraw(a);
                break;
            case 4:
                obj.display(a);
                break;
            case 5:
                obj.bsort(a);
                break;
            case 6:
                obj.search(a);
                break;
            case 7:
                m=0;
                break;
            default:
                cout<<"Wrong Choice"<<endl;
                break;

            }
        }


}

void bank::search(bank a[500])
{
    int i,s;
    cout<<"Enter Account Number="<<endl;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(a[i].ac_num==s)
        {
            cout<<"Search Result is"<<endl;
            cout<<"        Account Name="<<a[i].name<<endl;
            cout<<"        Account Type="<<a[i].ac_num<<endl;
            cout<<"        Account Type="<<a[i].type<<endl;
            cout<<"        Account Balance="<<a[i].balance<<endl;
        }
        else
            cout<<"Not Found"<<endl;
}
}


    void bank::getinfo(bank a[500])
        {
            int i;
            for(i=0;i<n;i++)
            {
            cout<<"Enter Name="<<endl;
            cin>>a[i].name;
            cout<<"Enter Account Number="<<endl;
            cin>>a[i].ac_num;
            cout<<"Enter Type="<<endl;
            cin>>a[i].type;
            cout<<"Enter Balance="<<endl;
            cin>>a[i].balance;
            }

        }
        void bank:: display(bank a[500])
        {
            int i;
            for(i=0;i<n;i++)
            {
                cout<<"Name="<<a[i].name<<endl;
                cout<<"Account Number="<<a[i].ac_num<<endl;
                cout<<"Account Type="<<a[i].type<<endl;
                cout<<"Balance="<<a[i].balance<<endl;
            }
        }
        void bank:: deposit(bank a[500])
        {
            int i;
        for(i=0;i<n;i++)
        {
        cout<<"Enter Deposit="<<endl;
        cin>>a[i].d;
        a[i].balance=a[i].balance+a[i].d;
        cout<<"Balance is="<<a[i].balance<<endl;
        }
        }
        void bank::withdraw(bank a[500])
        {
        int i;
        for(i=0;i<n;i++)
        {
        cout<<"Balance Amount="<<a[i].balance<<endl;
        cout<<"Enter Withdrawal Amount="<<endl;
        cin>>a[i].w;
        a[i].balance=a[i].balance-a[i].w;
        cout<<"After Withdraw Balance="<<a[i].balance<<endl;
        }
        }
        void bank:: bsort(bank a[500])
        {
            int i,j;
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i].balance<a[j].balance)
                    {
                        swap(a[i],a[j]);
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<"Sorted Account According Balance Is="<<endl;
                for(i=0;i<n;i++)
                {
                    cout<<"        Account Name="<<a[i].name<<endl;
                    cout<<"        Account Number="<<a[i].ac_num<<endl;
                    cout<<"        Account Type="<<a[i].type<<endl;
                    cout<<"       Account Balance="<<a[i].balance<<endl;
                }
        }
}






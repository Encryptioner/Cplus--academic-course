#include <iostream>
#include<cstring>
using namespace std;

class Account
{
	private:
	  char *name;
	  double balance;
	  unsigned int id; //unique
	public:
	  Account();/*Default constructor*/
	  Account(const Account &a);/*Copy constructor*/
	  Account(const char *person);/*constructor with parameters*/
	  char get_unique_id()
	  {
	      char name='x';
	      cout<<name<<endl;
	  }
};

Account :: Account()
{
	name = NULL;
	balance = 0.0;
	id = get_unique_id();
	cout<<"in default\n";
};

Account :: Account(const Account &a)
{
	name = new char[strlen(a.name)+1];
	strcpy (name, a.name);
	balance = a.balance;
	id = get_unique_id();

	cout<<"in copy\n";
};

Account :: Account(const char *person)
{
	name = new char[strlen(person)+1];
	strcpy (name, person);
	balance = 0.0;
	id = get_unique_id();

	cout<<"in parameter\n";
};

int main()
{
    Account a;
    a.get_unique_id();
    return 0;
}



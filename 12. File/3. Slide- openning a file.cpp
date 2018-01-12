#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	fstream fp;
	string fileName;

	cout << "Enter the name of a file you wish to open\n";
	cout << "or create: ";

	getline(cin,fileName);
	fp.open(fileName,ios::out);

	//fp.open("cse3.txt", ios::out);

	cout<<"The file was opened.\n";

	return 0;
}


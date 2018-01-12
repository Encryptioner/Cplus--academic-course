#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//fstream dataFile;
	//dataFile.open("cse4.text", ios::out);//create a file when cse4.text was not created
	//dataFile.open("cse4.text", ios::in);//open a file ready to take input
	fstream dataFile("cse4.text", ios::in | ios::out);//open a file ready when cse4.text was created and don't create a file when cse4.text was not created
	cout << "The file cse4.text was opened.\n";

	dataFile.open("cse4.text", ios::in);
    //if (!dataFile)
    if(dataFile.fail())
    {
        cout <<"Error opening file.\n";
    }
    else
    {
        cout <<"opened file.\n";
    }
    cout << "Now closing the file.\n";
	dataFile.close();
    if(dataFile.fail())
    {
        cout <<"Error opening file.\n";
    }
    else
    {
        cout <<"opened file.\n";
    }

	return 0;
}


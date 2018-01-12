#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream dataFile;
	//string name;
    char name[81];
	dataFile.open("cse5.txt", ios::out);
	if (!dataFile)
	{
		cout << "File open error!" << endl;
		//return;
	}
	else
    {
        cout << "File opened successfully.\n";
    }

	cout << "Now writing information to the file.\n";

	dataFile << "Jones lnln\n";
	dataFile << "Smith\n";

	//dataFile.getline(name,81);
	dataFile.close();
	dataFile << "Ashik Banaye\n";
	dataFile.open("cse5.txt",ios::app | ios::out);
	dataFile << "Willis\n";
	dataFile << "Davis\n";

	dataFile.close();
    dataFile.open("cse5.txt",ios::in);

	cout << "Done.\n Now outputting file in screen\n\n";

	for(int count=0;count<4;count++)
    {
        //dataFile>>name;
        //dataFile.getline()
        cout<<name<<endl;
    }
    dataFile.close();
    cout << "\n\nDone.";
	return 0;
}


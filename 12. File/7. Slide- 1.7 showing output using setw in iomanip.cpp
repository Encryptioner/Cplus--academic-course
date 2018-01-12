#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{	fstream outFile("cse7.txt", ios::out);
	int nums[3][3] = { 2897, 5, 837,
                        34, 7, 1623,
                        390, 3456, 12 };
	// Write the three rows of numbers
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
     		    outFile << setw(5) << nums[row][col] << "  ";//setw(5) means there are 5 character space to print the number and last digit of number will be print in 5th position
		}
		outFile << endl;
	}
	outFile.close();
}

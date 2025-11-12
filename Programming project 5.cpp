// Programming project 
// Program 3: Holds the population bar chart where you need to input the correct file name to access the file.
// As well as calculate the population growth

#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main()
{
	string filename;
	string townName;
	ifstream inputFile;
	int population;
	int year = 1900;
	const int INTERVAL = 20;

	cout <<  "Enter the name of the file: ";
	cin >> filename;
	cout << "Enter the name of the town: ";
	cin.ignore();
	getline(cin, townName);

		inputFile.open(filename);

	if (!inputFile)
	{
		cout << "Error: Can not open file " << filename << endl;
		return 1;


	}

	cout << "\n" << townName << " Population Growth" << endl;
	cout << "(each * represents 1,000 people)\n" << endl;

	while (inputFile >> population)
	{
		cout << year << " ";
		for (int i = 0; i < population / 1000; i++)
		{
			cout << "*";

		}
		cout << endl;
		year += INTERVAL; 

	}
	inputFile.close();

	return 0;


}



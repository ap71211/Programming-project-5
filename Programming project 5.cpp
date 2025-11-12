// Programming project 5.cpp : This file contains the 'main' function for the whole project. 
// Program 1: Use loops to model repeated population growth across multiple days.
// Apply arithmetic calculations involving percentages.
// Implement input validation for starting size, daily increase, and days.

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



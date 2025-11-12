// Program 2: Student Lineup
// Write a program that reads a list of student names from a text file and determines
// the first and last names in alphabetical order. The program should also count
// the total number of students in the list. Assume that each name is a single word

#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	ifstream inputFile;
	string name;
	string firstStudent;
	string lastStudent;
	int count = 0;

	inputFile.open("LineUp.txt");

	if (!inputFile)
	{
		cout << "Error could not open file." << endl;
		return 1;
	}

	if (inputFile >> name)
	{
		firstStudent = name;
		lastStudent = name;
		count = 1;
		
	}
	else {
		cout << "Error: File is empty. " << endl;
		return 1;
	}
	while (inputFile >> name)
	{
		count++;
		if (name < firstStudent)
		{
			firstStudent = name;

		}
		if (name > lastStudent)
		{
			lastStudent = name; 

		}

	}
	inputFile.close();
		cout << "Number of studnets: " << count << endl;
		cout << "First student alphabetically: " << firstStudent << endl;
		cout << "Last student alphabetically: " << lastStudent << endl;

	return 0;

}



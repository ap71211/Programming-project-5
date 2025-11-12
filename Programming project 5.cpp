// Programming project 5.cpp : This file contains the 'main' function for the whole project. 
// Program 1: Use loops to model repeated population growth across multiple days.
// Apply arithmetic calculations involving percentages.
// Implement input validation for starting size, daily increase, and days.

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	double startingSize;
	double dailyIncrease;
	int days;

	cout << "Enter the number of organisms: ";
	cin >> startingSize;
	while (startingSize < 2)
	{
		cout << "Invalid input. Please enter a number greater than or equal to 2: ";
		cin >> startingSize;
	}
	cout << "Enter the averave daily increase (as a percentage): ";
	cin >> dailyIncrease;
	while (dailyIncrease < 0)
	{
		cout << "Invalid input. Please enter a non-negative percentage: ";
		cin >> dailyIncrease;
	}
	cout << "Enter the number of days that they will multiply: ";
	cin >> days;
	while (days < 1)
	{
		cout << "Invalid input. Please enter a number greater than or equal to 1: ";
		cin >> days;
	}

	cout << fixed << setprecision(2);
	cout << "\nDay\tPopulation Size\n";
	cout << "\n";

		double populationSize = startingSize;
	for (int day = 1; day <= days; day++)
	{
		cout << day << "\t" << populationSize << "\n";
		populationSize += populationSize * (dailyIncrease / 100);
	}
	return 0;

}



// Programming project 5.cpp : This file contains the 'main' function for the whole project. 
// Program 1: Use loops to model repeated population growth across multiple days.
// Apply arithmetic calculations involving percentages.
// Implement input validation for starting size, daily increase, and days.

#include <iostream>

using namespace std;



int main()
{
	const int ROW = 10;

	cout << "Pattern A\tPattern B\n";

	for (int row = 1; row <= ROW; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << "+";


		}
		cout << "\t";

		for (int col = ROW; col >= row; col--)
		{
			cout << "+";
		}
		cout << endl;

	}
	return 0;


}



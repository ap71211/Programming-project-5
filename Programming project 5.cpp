// Programming project 5.cpp 
// Program 4: Holds the pattern program where you use a loop to make a pattern.  

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



// Programming project 5.cpp : This file contains the 'main' function for the whole project. 
// Program 5: Houses the random number game where you use the random number generator to guess the right number

#include <iostream>
#include <cstdlib>
#include <ctime> 


using namespace std;



int main()
{
    int randomNumber;
    int guess;
    int attempts = 0;

    srand(static_cast<unsigned int>(time(0)));

    randomNumber = rand() % 100 + 1;

    cout << " Hello and welcome to my number guessing game !" << endl;
    cout << "I am thinking of a number that it between 1-100. Try and guess it in as few tries as possible." << endl;
    cout << endl;


    do 
    {
        cout << "Enter your number: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) 
        {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low, try again." << endl;
        }
        else 
        {
            cout << "Correct! You guessed the right number in "
                << attempts << " attempts." << endl;
        }

    } while (guess != randomNumber);

    return 0;

}



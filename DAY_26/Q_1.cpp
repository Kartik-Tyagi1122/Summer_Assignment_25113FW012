//program to create number guessing game
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << " Number Guessing Game " << endl;
    cout << "Guess a number between 1 and 100." << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "Total Attempts: " << attempts << endl;
            break;
        }
    }

    return 0;
}
// guess_number_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int answer = 0;
	int totalGuess = 0;
	int guess;
	bool winner = false;
	srand(time(NULL));
	answer = rand() % 101;

	while (winner == false) {
		totalGuess = 1 + totalGuess;
		cout << "Enter a number between 0 and 100: ";
		cin >> guess;
		if (guess == answer) {
			cout << "YOU WIN WELL DONE \n";
			cout << "It took you " << totalGuess << " guesses";
			Sleep(5000);
			winner = true;
		}
		else {
			if (guess > answer) {
				cout << "You are guessing too high\n";
			}
			else {
				cout << "You are guessing too low\n";
			}
		}
		

	}

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

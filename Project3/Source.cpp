//preprocessor statements
#include <iostream>
#include "stdlib.h"
#include <ctime>

using namespace std;

///////////////////////////////////////////////////////////////////////
/*TODO:
1. Return "turns remaining/used" aka total turns taken on win senario.
2. Return Higher/Lower on Guess. -COMPLETE
*/
///////////////////////////////////////////////////////////////////////

int main()
{
	int turns_used = 0;
	srand(time(NULL)); 
	int number = rand() % 5 +1;
	bool win = false;

	{

		///////////// for loop //////////////////////////////////////////
		for (int i = 5; i >= 1; i--)
		{

			//system("cls"); - removed returns "turns remaining"


			//1. Output turn count and instructions to user.
			cout << "*********WELCOME TO NUMBAH*********" << endl;

			cout << "Try and guess the correct number" << endl;

			std::cout << "You have " << i
				<< " turns to guess a number between 1 and 5"
				<< std::endl;
			std::cout << "Input Number";
			//2. Intake users guess.
			int guess;
			std::cin >> guess;
			//3. Evaluate users guess.

			if (guess == number) {
				win = true;
				turns_used = 5 - --i;
				break;


			}

			//flow control statements
			else if (guess < number) {
				cout << "Too low bro, Try Again." << endl;
				win = false;
				continue;
			}

			else {
				cout << "Too high guy, Try Again." << endl;
				win = false;
				continue;
			}
		}
		//conditional statements
		if (win) {
			std::cout << "Yay! YOU WON! It it took you " << turns_used << " turn(s)" << std::endl;

		}

		else {
			std::cout << "You lose. - the number was:" << number << std::endl;

		}
	}
	
	system (
		"pause");
	return 0;






}

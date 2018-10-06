//preprocessor statements
#include <iostream>
#include "stdlib.h"
#include <ctime>

using namespace std;


/*TODO:
1. Return "turns remaining" aka total turns taken on win senario.
2. Return Higher/Lower on Guess.
*/


int main()
{
	srand(time(NULL));
	int number = rand() % 5 +1;
	bool win = false;

	for (int i = 5; i >= 1; i--)
	{

		//system("cls"); - removed returns "turns remaining"


		//1. Output turn count and instructions to user.
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
			break;

		}
		else { win = false;
		continue;
		}
	}
	
	if (win) {
	std::cout << "Yay! YOU WON!" << std::endl;

	}

	else {
		std::cout << "You lose. - the number was:" << number << std::endl;

	}
	system (
		"pause");
	return 0;






}

#include "Dice.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


Dice::Dice(){
	roll_num = 1;
}

int Dice::roll_dice(){
	//random number between 1 and 6
	int roll = rand() % 6 + 1;
	return roll;
}

Computer::Computer(){
	alive = 1;
}

int Computer::get_roll(){
	Dice D;
	//computer rolls first
	return D.roll_dice();
}

int player_roll(){
	//seed random number by time
	Dice A;
	srand(time(NULL));
	int player_roll;
	char user_input;
	std::cout << "Press r to roll: ";
	std::cin >> user_input;

	if (user_input != 'r'){
		std::cout << "Invalid input";
		return 1;
	}

	player_roll = A.roll_dice();

	std::cout << "You rolled: " << player_roll << std::endl;

	return player_roll;
}
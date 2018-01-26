#include <iostream>
#include "Dice.h"

int main(){
	Dice D;
	int player_roll;
	std::cout << "Press 1 to roll dice: ";
	std::cin >> player_roll;

	if (player_roll != 1){
		std::cout << "Invalid input";
		return 1;
	}

	player_roll = D.roll_dice();

	std::cout << "You rolled: " << player_roll;
	

	return 0;

}
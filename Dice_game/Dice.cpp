#include "Dice.h"
#include <cstdlib>

Dice::Dice(){
	roll_num = 1;
}

int Dice::roll_dice(){
	//random number between 1 and 6
	int roll = rand() % 5 + 1;
	return roll;
}
#ifndef DICE_H
#define DICE_H


class Dice {
public:
	Dice();
	int roll_num;
	int roll_dice();
};


class Computer {
public:
	Computer();
	int alive;
	int get_roll();
};

int player_roll();



#endif
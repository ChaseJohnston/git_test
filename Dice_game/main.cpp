#include <iostream>
#include "Dice.h"
#include <ctime>
#include <cstdlib>
#include <unistd.h>

int main(){
	Dice D;
	srand(time(NULL));
	int player_choice;
	std::cout << "DICE GAME: Press 1 to player AI, Press 2 to roll for fun: ";
	std::cin >> player_choice;
	

	if(player_choice == 1){
		//play AI
		Computer C;
		int computer_roll;
		int user;
		//computer rolls
		std::cout << "Computer rolling..." << std::endl;
		computer_roll = C.get_roll();
		//half second delay for effect
		usleep(500000);
		std::cout << "Computer rolled a " << computer_roll << std::endl;
		//Player rolls
		user = player_roll();


		if(user > computer_roll){
			std::cout << "Congradulations! You Won!" << std::endl;
			return 0;

		} else if (computer_roll > user) {
			std::cout << "Sorry! You Lost!" << std::endl;
			return 0;
		} else {
			std::cout << "It was a tie!" << std::endl;
			return 0;
		}


	} else if(player_choice == 2) {
		
		player_roll();

		return 0;
	
		}

	else{

		std::cout << "Invalid entry, try again";
	}

	return 0;

}
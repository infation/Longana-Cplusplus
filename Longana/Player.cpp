#include "Player.h"

//Constructor
Player::Player()
{
	hand = new Hand();
}

void Player::play() {

	int choice;
	
	//Choose which tile to play from player's hand
	do {
		std::cout << "Your hand is : " << std::endl;
		hand->printHand();
		std::cout << std::endl << "Press from 1 to " << hand->getHand()->size()<<": ";
		std::cin >> choice;
	} while (choice < 1 || choice > hand->getHand()->size());

	int index = choice - 1;
	std::cout << "Your choice is : "; 
	hand->getHand()->at(index).printTile();
	hand->removeFromHand(index);
	std::cout << "\n\n";
}

Hand* Player::getHand() {
	return hand;
}

void Player::removeFromHand(int index) {
	hand->removeFromHand(index);
}

void Player::addToHand(Tile t) {
	hand->addToHand(t);
}

//Destructor
Player::~Player() { delete hand; }

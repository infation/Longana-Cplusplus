#include "Player.h"

//Constructor
Player::Player()
{
	hand = new Hand();
}

void Player::play(Board* board) {

	int choice;
	
	//Choose which tile to play from player's hand
	do {
		std::cout << "Your hand is : " << std::endl;
		hand->printHand();
		std::cout << std::endl << "Press from 1 to " << hand->getHand()->size()<<": ";
		std::cin >> choice;
	} while (choice < 1 || choice > hand->getHand()->size());

	int index = choice - 1;

	//If the chosen tile is double ask the user on which side to put it
	//and update the board
	if (hand->getHand()->at(index).isDouble()) {
		int choice;
		std::cout << "Do you want to place it on the left or on the right?\n Press 1 for Left or 2 for Right !\n";
		std::cin >> choice;
		switch (choice) {
			case 1:
				if (board->checkRulesForPlacement(true,hand->getHand()->at(index))) {
					board->addToLeft(hand->getHand()->at(index));
				}
				else {
					std::cout << "Invalid move \n";
				}
				break;
			case 2:
				if (board->checkRulesForPlacement(true, hand->getHand()->at(index))) {
					board->addToRight(hand->getHand()->at(index));
				}
				else {
					std::cout << "Invalid move \n";
				}
				break;
		}
	}
	else {
		if (board->checkRulesForPlacement(true, hand->getHand()->at(index))) {
			std::cout << "Invalid Move! ";
		}
		else {
			board->addToLeft(hand->getHand()->at(index));
		}
	}

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

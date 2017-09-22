#include "Hand.h"


//Constructor
Hand::Hand()
{
	//Dynamically allocate
	hand = new std::vector<Tile>;
}

//Public Getter
std::vector<Tile>* Hand::getHand() {
	return hand;
}

//To add tile to the hand
void Hand::addToHand(Tile t) {
	hand->push_back(t);
}

//To pop tile
void Hand::removeFromHand(int index) {
	hand->erase(hand->begin() + index);
}

//Print the hand
void Hand::printHand() {
	for (int i = 0; i < hand->size(); i++) {
		hand->at(i).printTile();
	}
}

//Destructor
Hand::~Hand(){ delete hand; }

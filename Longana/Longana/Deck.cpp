#include "Deck.h"

//Constructor which initializes the deck
Deck::Deck()
{
	//Dynamically allocate
	deck = new std::vector<Tile>;
	//Generate the 28 tiles and push it in the deck
	for (unsigned int i = 0; i < 7; i++) {
		for (unsigned int j = i; j < 7; j++) {
			Tile t = Tile(i, j);
			deck->push_back(t);
		}
	}
	//Shuffle the deck
	shuffle();
}

//To remove the last tile
void Deck::removeTile() {
	deck->pop_back();
}

//To print the contents of the deck
void Deck::print() {
	int size = deck->size();
	for (int i = 0; i < size ; i++) {
		deck->at(i).printTile();
	}
}

//Function to shuffle the deck before the game starts
void Deck::shuffle() {
	
	//Random seed 
	srand(time(NULL));

	//Generate random number from 0 to (size of deck - 1) 
	int randIndex1 = rand() % deck->size();
	int randIndex2 = rand() % deck->size();
	for (int i = 0; i < 5000; i++) {
		//Swap elements from randIndex1 and randIndex2;
		Tile t1 = deck->at(randIndex1);
		Tile t2 = deck->at(randIndex2);
		deck->at(randIndex1) = t2;
		deck->at(randIndex2) = t1;

		//Generate different random indexes
		randIndex1 = rand() % deck->size();
		randIndex2 = rand() % deck->size();
	}

}

Tile Deck::draw() {
	Tile t = deck->back();
	deck->pop_back();
	return t;
}

//Getter
std::vector<Tile>* Deck::getDeck() {
	return deck;
}

//Destructor
Deck::~Deck() { delete deck; }

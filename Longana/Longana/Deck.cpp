#include "Deck.h"

//Constructor which initializes the deck
Deck::Deck()
{
	deck = new std::vector<Tile>;
	for (unsigned int i = 0; i < 7; i++) {
		for (unsigned int j = i; j < 7; j++) {
			Tile t = Tile(i, j);
			deck->push_back(t);
		}
	}
}

void Deck::removeTile() {
	deck->pop_back();
}

void Deck::print() {
	shuffle();
	int size = deck->size();
	for (int i = 0; i < size ; i++) {
		Tile t = deck->at(i);
		t.printTile();
	}
}

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

std::vector<Tile>* Deck::getDeck() {
	return deck;
}

Deck::~Deck() { delete deck; }

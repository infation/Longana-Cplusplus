#include "Deck.h"
#include "Tile.h"
//Constructor which initializes the deck
Deck::Deck()
{
	deck = new std::stack<Tile>;
	for (unsigned int i = 0; i < 7; i++) {
		for (unsigned int j = 0; j < 7; j++) {
			Tile t = Tile(i, j);
			deck->push(t);
		}
	}
}

void Deck::removeTile() {
	Deck::getDeck()->pop();
}

void Deck::print() {
	for (int i = 0; i < deck->size(); i++) {
		Tile t = deck->top();
		t.printTile();
		deck->pop();
	}
}

std::stack<Tile>* Deck::getDeck() {
	return deck;
}

Deck::~Deck() { delete deck; }

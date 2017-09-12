#pragma once
#include<stack>
#include "Tile.h"

class Deck
{
	public:
		Deck();
		~Deck();
		std::stack<Tile>* getDeck();
		void removeTile();
		void print();
	private:
		std::stack<Tile>* deck;
};


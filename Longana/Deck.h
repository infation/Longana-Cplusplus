#pragma once
#include<vector>
#include "Tile.h"
#include<time.h>

class Deck
{
	public:
		Deck();
		~Deck();
		std::vector<Tile>* getDeck();
		void removeTile();
		void print();
		Tile draw();
		void shuffle();
	private:
		std::vector<Tile>* deck;
};


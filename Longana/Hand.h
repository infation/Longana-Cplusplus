#pragma once
#include<vector>
#include "Tile.h"
#include<algorithm>
#include<iostream>

class Hand
{
	public:
		Hand();
		std::vector<Tile>* getHand();
		void addToHand(Tile t);
		void printHand();
		void removeFromHand(int index);
		~Hand();
	private:
		std::vector <Tile>* hand;
};


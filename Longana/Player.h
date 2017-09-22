#pragma once
#include "Hand.h"
#include "Board.h"
class Player {
	public:
		Player();
		virtual void play(Board* board);
		Hand* getHand();
		void addToHand(Tile t);
		void removeFromHand(int index);
		~Player();
	private:
		Hand* hand;
};


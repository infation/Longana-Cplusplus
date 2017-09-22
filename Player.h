#pragma once
#include "Hand.h"
#include "Board.h"
#include "Deck.h"

class Player {
	public:
		Player();
		virtual void play(Board* board, Deck* deck);
		Hand* getHand();
		void addToHand(Tile t);
		void removeFromHand(int index);
		~Player();
	private:
		Hand* hand;
};


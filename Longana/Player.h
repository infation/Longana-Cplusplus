#pragma once
#include "Hand.h"
class Player {
	public:
		Player();
		virtual void play();
		Hand* getHand();
		void addToHand(Tile t);
		void removeFromHand(int index);
		~Player();
	private:
		Hand* hand;
};


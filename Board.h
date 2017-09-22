#pragma once
#include "Tile.h"
#include<vector>
#include "Hand.h"
#include<string.h>

class Board
{
	public:
		Board();
		void addToLeft(Tile t);
		void addToRight(Tile t);
		void printBoard();
		bool checkAvailableMoves(bool isLeft, Hand* t);
		bool checkRulesForPlacement(bool isLeft, Tile& t);
		std::vector<Tile>* getBoardTiles();
		void setEngine(Tile t);
		~Board();
	private:
		std::vector<Tile>* boardTiles;
		
};


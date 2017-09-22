#pragma once
#include<iostream>

class Tile
{
	//Public functions
	public:
		Tile();
		Tile(unsigned int, unsigned int);
		unsigned int * getTile();
		void setTile(unsigned int, unsigned int);
		void printTile();
		void switchPips();
		bool isDouble();
		~Tile();
	//Private member data
	private:
		unsigned int pips[2];
};


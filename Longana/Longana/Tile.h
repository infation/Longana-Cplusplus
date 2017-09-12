#pragma once
class Tile
{
	//Public functions
	public:
		Tile();
		Tile(unsigned int, unsigned int);
		unsigned int * getTile();
		void setTile(unsigned int, unsigned int);
		void printTile();
		~Tile();
	//Private member data
	private:
		unsigned int pips[2];
};


#include "Tile.h"

//Default constructor
Tile::Tile() {}

//Custom constructor
Tile::Tile(unsigned int pip1, unsigned int pip2){
	this->pips[0] = pip1;
	this->pips[1] = pip2;
}

//Getter
unsigned int * Tile::getTile() {
	return pips;
}

//Setter
void Tile::setTile(unsigned int pip1, unsigned int pip2) {
	this->pips[0] = pip1;
	this->pips[1] = pip2;
}

void Tile::switchPips() {
	int p = pips[0];
	pips[0] = pips[1];
	pips[1] = p;
}

//To print the tile's contents
void Tile::printTile() {
	std::cout << pips[0] << " - " << pips[1]<< " ";

}

bool Tile::isDouble() {
	if (pips[0] == pips[1]) 
		return true;
	else 
		return false;
}

//Destructor
Tile::~Tile(){}

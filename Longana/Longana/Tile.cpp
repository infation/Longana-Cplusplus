#include "Tile.h"
#include<iostream>
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

void Tile::printTile() {
	std::cout << "Tile " << pips[0] << " - " << pips[1]<<std::endl;

}

//Destructor
Tile::~Tile(){}

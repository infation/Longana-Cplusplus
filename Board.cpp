#include "Board.h"

//Default constructor
Board::Board()
{
	boardTiles = new std::vector<Tile>;
}

bool Board::checkAvailableMoves(bool isLeft, Hand* h) {
	for (int i = 0; i < h->getHand()->size(); i++) {
		if (isLeft) {
			if (checkRulesForPlacement(isLeft, h->getHand()->at(i))) {
				return true;
			}
		}
		else {
			if (checkRulesForPlacement(isLeft, h->getHand()->at(i))) {
				return true;
			}
		}
	}
	return false;
}

//A function to check if the placement is correct
//according to the rules of the game
bool Board::checkRulesForPlacement(bool isLeft, Tile& t) {
	//If the players are adding a tile on the left side of the board
	if (isLeft) {
		if (boardTiles->at(0).getTile()[0] == t.getTile()[1]){
			return true;
		}
		//Check the reversed pips and the switch the pips for that specific tile
		else if (boardTiles->at(0).getTile()[0] == t.getTile()[0]) {
			t.switchPips();
			return true;
		}
		else {
			return false;
		}
	}
	//If the players are adding a tile on the right side of the board
	else {
		int size = boardTiles->size() - 1 ;
		if (boardTiles->at(size).getTile()[1] == t.getTile()[0]) {
			return true;
		}
		//Check the reversed pips and the switch the pips for that specific tile
		else if (boardTiles->at(size).getTile()[1] == t.getTile()[1]) {
			t.switchPips();
			return true;
		}
		else {
			return false;
		}
	}
}

void Board::addToLeft(Tile t) {
	boardTiles->insert(boardTiles->begin(), t);
}

void Board::addToRight(Tile t) {
	boardTiles->insert(boardTiles->end(), t);
}

void Board::printBoard() {
	std::cout << "         L ";
	for (int i = 0; i < boardTiles->size(); i++) {
		if (boardTiles->at(i).isDouble()) {
			
		}
		else {

		}
		boardTiles->at(i).printTile();
		
	}
	std::cout << " R\n\n";
}

//Getter
std::vector<Tile>* Board::getBoardTiles() {
	return boardTiles;
}

//To set the engine(the beginning double tile for each round
void Board::setEngine(Tile t) {
	boardTiles->push_back(t);
}

Board::~Board()
{
}

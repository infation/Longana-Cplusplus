#include "Round.h"

using namespace std;


Round::Round()
{
}


Round::~Round()
{
}

int main() {
	Board* board = new Board();
	Deck* deck = new Deck();
	Player* human = new Player();

	board->setEngine(Tile(6, 6));
	deck->removeTile(Tile(6, 6));

	for (int i = 0; i < 8; i++) {
		human->addToHand(deck->draw());
	}
	
	board->printBoard();
	while (human->getHand()->getHand()->size() > 0) {
		human->play(board);
		board->printBoard();
	}
	
	system("pause");
	return 0;
}
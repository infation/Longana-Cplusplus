#include "Round.h"

using namespace std;


Round::Round()
{
}


Round::~Round()
{
}

int main() {
	Deck* deck = new Deck();
	Player* human = new Player();
	for (int i = 0; i < 8; i++) {
		human->addToHand(deck->draw());
	}

	while (human->getHand()->getHand()->size() > 0) {
		human->play();
	}
	
	system("pause");
	return 0;
}
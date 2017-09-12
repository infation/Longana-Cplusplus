#include "Round.h"
#include "Deck.h"
using namespace std;


Round::Round()
{
}


Round::~Round()
{
}

int main() {
	Deck* deck = new Deck();
	deck->print();
	system("pause");
	return 0;
}
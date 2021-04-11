#pragma once

#include "Hand.h"
class House
{
	Hand hand;
	bool soft17;
public:
	void init();
	void setSoft17(bool soft17);
	void insertHand(Card card);
	bool checkBlackjack();
	Card getFaceupCard();
	void print(bool showAll);
	int getScore();
	int makeDecision();
};


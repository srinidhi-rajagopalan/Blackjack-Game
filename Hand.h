#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include "Card.h"
class Hand
{
private:
	std::vector<Card> cards; // Vector to store the 13 cards for each of suit
	bool blackjack; // Boolean variable to return true or flase for checking balckjack
public:
	Hand() // constructor
	{
		cards.clear();
	}
	void init() //Initializing cards by setting card (vector) size to zero
	{
		cards.clear();
		blackjack = false;
	}
	void insert(Card card)	// "Insert" card into the hand
	{
		cards.push_back(card);
		if (cards.size() == 2)
		{
			if ((cards[0].getNum() == 10 || cards[0].getNum() == 11 || cards[0].getNum() == 12 || cards[0].getNum() == 13) 
				&& cards[1].getNum() == 1)
				blackjack = true; // First card: 10/Jack/Queen/King, Second Card: Ace

			if ((cards[1].getNum() == 10 || cards[1].getNum() == 11 || cards[1].getNum() == 12 || cards[1].getNum() == 13)
				&& cards[0].getNum() == 1)
				blackjack = true; // First card:Ace, Second Card: 10/Jack/Queen/King
		}
	}
	
	int getCount() //Returns the number of cards
	{
		return (int)cards.size();
	}

	Card getCard(int i) //Returns the cards the player has
	{
		return cards[i];
	}

	bool checkBlackjack() // Returns true when the hand is equal to 21 otherwise will be false
	{
		return blackjack;
	}
};

#pragma once

#include <vector>
#include <algorithm>
#include <cstdlib>

#include "Card.h"
class Deck
{
private:
    std::vector<Card> cards; // The vector stroes the cards for each suit
    unsigned int nextCardIndex; // The variable stores the index of each card
public:
	// Initialize a deck
	Deck()
	{
		// Initialize 52 cards
		for (int i = 1; i <= 13; i++) // Push_back used to append the card into the vector "cards"
		{
			cards.push_back(Card(i, "S"));
			cards.push_back(Card(i, "H"));
			cards.push_back(Card(i, "C"));
			cards.push_back(Card(i, "D"));
		}
		
		shuffle();
	}
	// Shuffle the cards
	void shuffle()
	{
		random_shuffle(cards.begin(), cards.end()); // Shuffles the cards between the two arguments
		nextCardIndex = 0; //Initialized
	}

	// Returns the next card
	Card getCard()
	{
		Card card = cards[nextCardIndex++];

		if (nextCardIndex >= cards.size())
			shuffle();
		
		return card;
	}
};



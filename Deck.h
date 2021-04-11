#pragma once

#include <vector>
#include <algorithm>
#include <cstdlib>

#include "Card.h"

using namespace std;

class Deck
{
private:
    vector<Card> cards;
    unsigned int nextCardIndex;
public:
    // Initialize a deck
    Deck()
    {
        // Initialize 52 cards
        for (int i = 1; i <= 13; i++)
        {
            cards.push_back(Card(i, "Clover"));
            cards.push_back(Card(i, "Spade"));
            cards.push_back(Card(i, "Heart"));
            cards.push_back(Card(i, "Clover"));
        }

        shuffle();
    }

    // Check if there's a next card
    bool hasNext()
    {
        return nextCardIndex < cards.size();
    }

    // Shuffle the cards
    void shuffle()
    {
        random_shuffle(cards.begin(), cards.end());
        nextCardIndex = 0;
    }

    // Return the next card
    Card getCard()
    {
        Card card = cards[nextCardIndex++];

        if (nextCardIndex >= cards.size())
            shuffle();

        return card;
    }


};



#pragma once

#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;

class Game
{
public:

    // Run the high-low game
    void run()
    {
        int score = 0;

        // Initialize game
        Deck deck;
        Card currentCard = deck.getCard();

        while (deck.hasNext())
        {
            // Let user guess
            cout << "Your current card is " << currentCard.getValue() << "-" << currentCard.getSuit() << endl;
            cout << "Is the next card higher or lower? (1 - Higher, 0 - Lower): ";
            int answer;
            cin >> answer;

            // Evaluate answer
            Card nextCard = deck.getCard();
            cout << "The next card is: " << nextCard.getValue() << "-" << nextCard.getSuit() << endl;

            if (currentCard.getValue() > nextCard.getValue())
            {
                score++;
                cout << "Correct!" << endl;
            }
            else
            {
                cout << "Incorrect" << endl;
            }

            cout << "Game over. Your score is " << score << endl;
        }
    }
};




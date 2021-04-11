#pragma once
#include <iostream>
#include <string>

using namespace std;

// Represents a card
class Card
{
public:
    // Default constructor
    Card()
    {
    }

    // Create a card
    Card(int value, string suit)
    {
        this->value = value;
        this->suit = suit;
    }

    // Getter methods
    int getValue()
    {
        return value;
    }

    string getSuit()
    {
        return suit;
    }

private:
    int value;
    string suit;
};



#pragma once

#include <iostream>
#include <string>

class Card
{
private:
    int num; //Face value
    std::string suit; //Type of card
public:
	// Constructor
	Card(int num, std::string suit)
	{
		this->num = num;
		this->suit = suit;
	}
	int getNum()//Returns the value of the card
	{
		return num;
	}
	std::string getSuit() //Returns the type of card
	{
		return suit;
	}

	std::string getCard()
	{
		std::string card = suit;
		if (num == 1)
			card += "A";
		else if (num == 11)
			card += "J";
		else if (num == 12)
			card += "Q";
		else if (num == 13)
			card += "K";
		else
			card += std::to_string(num); //number -> string, for example 13 -> K
		return card;
	}
};


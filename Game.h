#pragma once

#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
    Deck deck;
    House house;
    std::vector<Player> players;

public:
    void run();
};


#pragma once
#include "Hand.h"

class Player
{
    int kind;	// 0: Human Player, 1: Sidney,	2: Alex, 3: Basic
    std::string name;
    Hand hand;
    int bank_roll;
    int bet_money;
    int insurance;
    bool doublingDown;
    bool blackjack65;
    bool surrendered;
public:
    Player(int kind);
    void init();
    int bet();
    void setName(std::string name);
    std::string getName();
    int getKind();
    void setBlackjack65(bool blackjack65);
    void surrendering();
    bool isSurrendering();
    void insuranceBet();
    void doDoublingDown();
    void insertHand(Card card);
    bool checkBlackjack();
    void print();
    int getScore();
    int makeDecision(Card dealerCard);
    int checkResult(int dealerScore);
};


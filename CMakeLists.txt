cmake_minimum_required(VERSION 3.15)
project(BlackJack)

set(CMAKE_CXX_STANDARD 14)

add_executable(BlackJack Source.cpp Card.h Deck.h Game.h Hand.h House.h Player.h Game.cpp House.cpp Player.cpp )
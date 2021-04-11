cmake_minimum_required(VERSION 3.15)
project(HighLow)

set(CMAKE_CXX_STANDARD 14)

add_executable(HighLow Source.cpp Card.h Deck.h Game.h)
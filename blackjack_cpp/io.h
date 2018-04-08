#ifndef IO_H
#define IO_H

#include "deck.h"
#include "player.h"

void printWelcomeMessage();
void printPlayerScore(Player &player);;
void printCard(Card &card);
void printDraw(Player &player);
void printOptions();
void printInvalidInput();
void printTurn(Player &player);
void printWinner(bool playerWon);
std::string getChoice();
std::string getPlayerName();

#endif

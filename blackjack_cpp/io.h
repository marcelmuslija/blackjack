#ifndef IO_H
#define IO_H

#include "deck.h"
#include "player.h"

void printWelcomeMessage();
void printPlayerScore(Player &player);;
void printCard(Card &card);
std::string getPlayerName();

#endif

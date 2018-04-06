#ifndef GAME_MECHANICS_H
#define GAME_MECHANICS_H

#include "gameMechanicsTypes.h"

Deck createDeck();
static int getRandomNumber(int min, int max);
static int getCardValue(Card &card);
static void swap(Card &a, Card &b);
static Player createPlayer(std::string &name);
void shuffleDeck(std::array<Card, DECK_SIZE> &deck);
bool playBlackjack(Deck &deck);

#endif

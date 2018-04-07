#ifndef DECK_H
#define DECK_H

#include <array>

#define DECK_SIZE 52


enum CardRank
{
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_9,
    RANK_10,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING,
    RANK_ACE,
    MAX_RANK
};

enum CardSuit
{
    SUIT_CLUB,
    SUIT_DIAMOND,
    SUIT_HEART,
    SUIT_SPADES,
    MAX_SUITS
};

struct Card
{
    CardRank rank;
    CardSuit suit;
};

typedef std::array<Card, DECK_SIZE> Deck;

int getCardValue(Card &card);
void shuffleDeck(Deck &deck);
Deck createDeck();

#endif

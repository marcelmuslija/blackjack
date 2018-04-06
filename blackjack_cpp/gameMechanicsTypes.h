#ifndef GAME_MECHANICS_TYPES_H
#define GAME_MECHANICS_TYPES_H
#define DECK_SIZE 52

#include <array>

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

struct Player
{
    std::string name;
    int score = 0;
};

typedef std::array<Card, DECK_SIZE> Deck;

#endif

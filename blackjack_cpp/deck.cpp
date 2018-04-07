#include <array>
#include "deck.h"

static int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

static void swap(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}

int getCardValue(Card &card)
{
    switch(card.rank)
    {
        case RANK_2:
        case RANK_3:
        case RANK_4:
        case RANK_5:
        case RANK_6:
        case RANK_7:
        case RANK_8:
        case RANK_9:
        case RANK_10:
            return card.rank + 2;
        case RANK_JACK:
        case RANK_QUEEN:
        case RANK_KING:
            return 10;
        case RANK_ACE:
            return 11;
    }
}


void shuffleDeck(Deck &deck)
{
    for(int card = 0; card < DECK_SIZE; ++card)
    {
        swap(deck[card], deck[getRandomNumber(0, DECK_SIZE-1)] );
    }
}

Deck createDeck()
{
    Deck deck;

    int card = 0;
    for(int suit = 0; suit < MAX_SUITS; ++suit)
    {
        for(int rank = 0; rank < MAX_RANK; ++rank)
        {
            deck[card].rank = static_cast<CardRank> (rank);
            deck[card].suit = static_cast<CardSuit> (suit);
            ++card;
        }
    }

    return deck;
}

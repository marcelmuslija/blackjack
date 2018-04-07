#include <array>
#include "deck.h"
#include "player.h"
#include "io.h"

bool playBlackjack(Deck &deck)
{
    Card *cardPtr = &deck[0];
    Player player = createPlayer(getPlayerName(), 0);
    Player dealer = createPlayer("Jack", 0);

    addScore(dealer, getCardValue(*cardPtr++));
    addScore(player, getCardValue(*cardPtr++));

    printPlayerScore(dealer);
    printPlayerScore(player);
}

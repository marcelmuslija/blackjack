#include <array>
#include <conio.h>
#include <windows.h>
#include "deck.h"
#include "player.h"
#include "io.h"


static void drawCard(Player &player, Card **ptrCardPtr)
{
    printDraw(player);
    Sleep(2000);
    printCard(**ptrCardPtr);
    Sleep(500);
    addScore(player, getCardValue(**ptrCardPtr));
    (*ptrCardPtr)++;
}

static void initialDraw(Player player, Player dealer, Card **ptrCardPtr)
{
    drawCard(dealer, ptrCardPtr);
    drawCard(player, ptrCardPtr);
    drawCard(player, ptrCardPtr);
}

bool playBlackjack(Deck &deck)
{
    Card *cardPtr = &deck[0];
    Card **ptrCardPtr = &cardPtr;
    Player player = createPlayer(getPlayerName(), 0);
    Player dealer = createPlayer("Dealer", 0);

    initialDraw(player, dealer, ptrCardPtr);
}

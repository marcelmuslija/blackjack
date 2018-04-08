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

static void initialDraw(Player &player, Player &dealer, Card **ptrCardPtr)
{
    drawCard(dealer, ptrCardPtr);
    drawCard(player, ptrCardPtr);
    drawCard(player, ptrCardPtr);
}

bool doesWantToHit()
{
    printOptions();
    std::string choice = getChoice();
    if(choice == "h") return true;
    if(choice == "s") return false;
    printInvalidInput();
    return doesWantToHit();
}


bool playBlackjack(Deck &deck)
{
    Card *cardPtr = &deck[0];
    Card **ptrCardPtr = &cardPtr;
    Player player = createPlayer(getPlayerName(), 0);
    Player dealer = createPlayer("Dealer", 0);

    initialDraw(player, dealer, ptrCardPtr);
    printPlayerScore(dealer);
    printPlayerScore(player);

    printTurn(player);
    while(true)
    {
        if(player.score == 21) break;;
        if(doesWantToHit())
        {
            drawCard(player, ptrCardPtr);
            printPlayerScore(player);
            if(player.score > 21) return false;
        }
        else break;
    }

    while(dealer.score < 17)
    {
        drawCard(dealer, ptrCardPtr);
        printPlayerScore(dealer);
        if(dealer.score > 21) return true;
    }

    return player.score > dealer.score;

}

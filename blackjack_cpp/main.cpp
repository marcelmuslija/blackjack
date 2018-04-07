#include <ctime>
#include "io.h"
#include "deck.h"
#include "gameMechanics.h"

int main()
{
    srand(static_cast<int> (time(0)));
    printWelcomeMessage();
    Deck deck = createDeck();
    shuffleDeck(deck);
    playBlackjack(deck);

    return 0;
}

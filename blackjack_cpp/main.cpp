#include "io.h"
#include "gameMechanics.h"
#include "gameMechanicsTypes.h"
int main()
{
    printWelcomeMessage();
    Deck deck = createDeck();
    shuffleDeck(deck);
    playBlackjack(deck);

    return 0;
}

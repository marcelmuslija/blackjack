#include <iostream>
#include "player.h"
#include "deck.h"

void printWelcomeMessage()
{
    std::cout << "\t\t\tWelcome to Blackjack!\nPress ENTER to play.";
    std::cin.get();
}

void printPlayerScore(Player &player)
{
    std::cout << player.name << ": " << player.score << "\n";
}

void printCard(Card &card)
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
        case RANK_10:       std::cout << card.rank + 2; break;
        case RANK_JACK:     std::cout << 'J'; break;
        case RANK_QUEEN:    std::cout << 'Q'; break;
        case RANK_KING:     std::cout << 'K'; break;
        case RANK_ACE:      std::cout << 'A'; break;
    }

    switch(card.suit)
    {
        case SUIT_CLUB:     std::cout << 'C'; break;
        case SUIT_HEART:    std::cout << 'H'; break;
        case SUIT_SPADES:   std::cout << 'S'; break;
        case SUIT_DIAMOND:  std::cout << 'D'; break;
    }
    std::cout << "\n";
}

std::string getPlayerName()
{
    std::string name;
    std::getline(std::cin, name);
    return name;
}

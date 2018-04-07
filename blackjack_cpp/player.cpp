#include "player.h"

Player createPlayer(std::string name, int score)
{
    Player player = {name, score};
    return player;
}

void addScore(Player &player, int score)
{
    player.score += score;
}

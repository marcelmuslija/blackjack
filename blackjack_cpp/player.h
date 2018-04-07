#ifndef PLAYER_H
#define PLAYER_H

#include <string>

struct Player
{
    std::string name;
    int score;
};

Player createPlayer(std::string name, int score);
void addScore(Player &player, int score);


#endif

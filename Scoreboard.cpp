#include "Scoreboard.h"
#include <iostream>

void Scoreboard::display(Player &p1, Player &p2)
{
    std::cout << p1.getName() << " " << p1.getScore() << " | " << p2.getScore() << " " << p2.getName() << std::endl;
}

int Scoreboard::getLowest()
{
    return 0;
}

int Scoreboard::getHighest()
{
    return 0;
}

void Scoreboard::addPlayer(Player p)
{
    //_players.push_back(p);
}

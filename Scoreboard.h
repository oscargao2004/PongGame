#pragma once
#include <fstream>
#include "Player.h"
#include <vector>

class Scoreboard
{
private:
	std::ifstream file;
	std::vector<Player> players;
public:
	static void display(Player &p1, Player &p2);
	static int getLowest();
	static int getHighest();
	static void addPlayer(Player p);
};


#pragma once
#include <fstream>
#include "Player.h"

class Scoreboard
{
private:
	int _highscore;
	std::ifstream file;
	Player players[5];

public:
	int getLowest();
	int getHighest();
};


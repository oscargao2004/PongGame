#pragma once
#include <string>

using namespace std;
class Player
{
private:
	int _score;
	string _name;
public:
	void addScore(int num);
	void setName(string name);
	string getName();
	void setScore(int num);
	int getScore();
	Player(string name) : _name(name), _score(0) {}
};


#include "Player.h"

void Player::addScore(int num)
{
	_score += num;
}

void Player::setName(string name)
{
	_name = name;
}

string Player::getName()
{
	return _name;
}

void Player::setScore(int num)
{
	_score = num;
}

int Player::getScore()
{
	return _score;
}

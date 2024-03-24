#pragma once
#include "Vector.h"
class Paddle
{
private:
	int _paddleLength;
	Vector _position;
public:
	Paddle(Vector position, int length) : _position(position), _paddleLength(length) {}
	void move(Vector direction);
};


#pragma once
#include "Vector.h"
class Paddle
{
private:
	int _paddleLength;
	Vector _position;
public:
	void move(Vector direction);
};


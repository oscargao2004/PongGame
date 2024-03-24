#pragma once
#include "Vector.h"
#include "TextRenderer.h"
class Paddle
{
private:
	int _paddleLength;
	Vector _position;
public:
	Paddle(Vector position, int length, Grid &grid);
	void move(Vector direction, Grid &grid);
	Vector getPosition();
};


#pragma once
#include "Vector.h"
#include "Grid.h"

class Ball
{
private:
	Vector _position;
	Vector _trajectoryDirection;
public:
	Vector getPosition();
	void setPosition(Vector vec);
	Vector getTrajectory();
	void setTrajectory(Vector vec);
	void move(Grid &grid);
	Ball(Vector pos, Grid &grid);
};


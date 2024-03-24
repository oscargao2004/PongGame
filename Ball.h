#pragma once
#include "Vector.h"
#include "Grid.h"

class Ball
{
private:
	Grid _grid;
	Vector _trajectoryDirection;
public:
	Vector getTrajectory();
	void setTrajectory(Vector vec);
	Ball(Grid &grid);
};


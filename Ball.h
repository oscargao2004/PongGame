#pragma once
#include "Vector.h"
class Ball
{
private:
	Vector _trajectoryDirection;
public:
	Vector getTrajectory();
	void setTrajectory(Vector vec);
};


#include "Ball.h"

Vector Ball::getTrajectory()
{
    return _trajectoryDirection;
}

void Ball::setTrajectory(Vector vec)
{
    _trajectoryDirection = vec;
}

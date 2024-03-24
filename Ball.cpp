#include "Ball.h"
#include "TextRenderer.h"
#include "Vector.h"

Vector Ball::getTrajectory()
{
    return _trajectoryDirection;
}

void Ball::setTrajectory(Vector vec)
{
    _trajectoryDirection = vec;
}

Ball::Ball(Grid &grid)
{
    _grid = grid;
    TextRenderer::draw(TextRenderer::boxChar, Vector(10, 7), grid);

}

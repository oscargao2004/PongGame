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

void Ball::move(Grid &grid)
{
    Tile& currentTile = grid.getTileAt(_position);
    Tile& nextTile = grid.getTileAt(_position.add(_trajectoryDirection));

    if (!nextTile.isCollidable())
    {
        TextRenderer::drawTile(nextTile.getPosition(), grid, false);
        TextRenderer::clearTile(currentTile.getPosition(), grid);

        _position = nextTile.getPosition();
    }
    else if (nextTile.isCollidable())
    {
        if (nextTile.getNormal().x == 0) //if colliding surface has vertical normals
        {
            _trajectoryDirection.y *= -1;

        }
        else if (nextTile.getNormal().y == 0) //if colliding surface has horizontal normals
        {
            _trajectoryDirection.x *= -1;

        }
    }

}

Ball::Ball(Vector pos, Grid &grid)
{
    _position = pos;
    TextRenderer::drawTile(pos, grid, false);

}

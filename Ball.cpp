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

    if (nextTile.isEmpty())
    {
        currentTile.setChar(TextRenderer::empty);
        currentTile.setEmpty(true);
        nextTile.setChar(TextRenderer::boxChar);
        nextTile.setEmpty(false);

        _position = nextTile.getPosition();
    }
    else
    {
        if (nextTile.getNormal().x == 0)
        {
            _trajectoryDirection = Vector(_trajectoryDirection.x * -1, _trajectoryDirection.y);
        }
        else
        {
            _trajectoryDirection = Vector(_trajectoryDirection.x, _trajectoryDirection.y * -1);
        }
    }

}

Ball::Ball(Vector pos, Grid &grid)
{
    _position = pos;
    TextRenderer::draw(TextRenderer::boxChar, pos, grid);

}

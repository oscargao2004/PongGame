#include "Paddle.h"

Paddle::Paddle(Vector position, int length, Grid &grid) : _position(position), _paddleLength(length) 
{
	TextRenderer::drawTile(_position, grid, true);

	if (_position.x < grid.getDimensions().x / 2)
	{
		grid.getTileAt(_position).setNormal(Vector().right());
		for (int i = 0; i < length / 2; i++)
		{
			grid.getTileAt(_position.add(Vector(0, i + 1))).setNormal(Vector().right());
			grid.getTileAt(_position.add(Vector(0, -i - 1))).setNormal(Vector().right());

		}
	}
	else
	{
		grid.getTileAt(_position).setNormal(Vector().left());
		for (int i = 0; i < length / 2; i++)
		{
			grid.getTileAt(_position.add(Vector(0, i + 1))).setNormal(Vector().left());
			grid.getTileAt(_position.add(Vector(0, -i - 1))).setNormal(Vector().left());

		}
	}

	for (int i = 0; i < length/2; i++)
	{
		TextRenderer::drawTile(_position.add(Vector(0,i + 1)), grid, true);
		TextRenderer::drawTile(_position.add(Vector(0,-i - 1)), grid, true);
	}
}

void Paddle::move(Vector direction, Grid &grid)
{
	//clear current tiles
	TextRenderer::clearTile(_position, grid);

	for (int i = 0; i < _paddleLength / 2; i++)
	{
		TextRenderer::clearTile(_position.add(Vector(0, i + 1)), grid);
		TextRenderer::clearTile(_position.add(Vector(0, -i - 1)), grid);
	}

	//draw new tiles
	_position = _position.add(direction);
	TextRenderer::drawTile(_position, grid, true);

	for (int i = 0; i < _paddleLength / 2; i++)
	{
		TextRenderer::drawTile(_position.add(Vector(0, i + 1)), grid, true);
		TextRenderer::drawTile(_position.add(Vector(0, -i - 1)), grid, true);
	}
}

Vector Paddle::getPosition()
{
	return _position;
}

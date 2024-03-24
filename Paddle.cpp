#include "Paddle.h"

Paddle::Paddle(Vector position, int length, Grid &grid) : _position(position), _paddleLength(length) 
{
	TextRenderer::drawTile(position, grid, true);

	if (position.x < grid.getDimensions().x / 2)
	{
		grid.getTileAt(position).setNormal(Vector().right());
	}
	else
	{
		grid.getTileAt(position).setNormal(Vector().left());
	}

	for (int i = 0; i < length/2; i++)
	{
		TextRenderer::drawTile(position.add(Vector(0,i + 1)), grid, true);
		TextRenderer::drawTile(position.add(Vector(0,-i - 1)), grid, true);
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

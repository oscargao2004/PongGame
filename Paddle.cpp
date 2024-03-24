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
	grid.getTileAt(_position).setChar(TextRenderer::empty); //Note: change to drawTile later
	_position = _position.add(direction);
	grid.getTileAt(_position).setChar(TextRenderer::boxChar);

}

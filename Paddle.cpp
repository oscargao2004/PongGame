#include "Paddle.h"

Paddle::Paddle(Vector position, int length, Grid &grid) : _position(position), _paddleLength(length) 
{
	TextRenderer::draw(TextRenderer::boxChar, position, grid);
	for (int i = 0; i < length/2; i++)
	{
		TextRenderer::draw(TextRenderer::boxChar, position.add(Vector(0,i + 1)), grid);
		TextRenderer::draw(TextRenderer::boxChar, position.add(Vector(0,-i - 1)), grid);
	}
}

void Paddle::move(Vector direction)
{
	_position = _position.add(direction);
}

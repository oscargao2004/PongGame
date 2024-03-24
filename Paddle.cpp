#include "Paddle.h"

void Paddle::move(Vector direction)
{
	_position = _position.add(direction);
}

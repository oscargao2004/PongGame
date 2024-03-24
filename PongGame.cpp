#include <iostream>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"
#include "Ball.h"
#include "Paddle.h"

Grid grid(20, 15);
InputHandler input;

int main()
{
	Ball ball(grid);
	Paddle p1(Vector(2, grid.getDimensions().y / 2), 3, grid);
	Paddle p2(Vector(grid.getDimensions().x - 3, grid.getDimensions().y / 2), 3, grid);

	while (true)
	{
		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame();
	}
	return 0;
}
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
	Ball ball(Vector(5, 7), grid);
	Paddle p1(Vector(2, grid.getDimensions().y / 2), 2, grid);
	Paddle p2(Vector(grid.getDimensions().x - 3, grid.getDimensions().y / 2), 3, grid);

	ball.setTrajectory(Vector().right().add(Vector().down()));

	while (true)
	{
		ball.move(grid);

		if (input.getKeyDown('w'))
		{
			p1.move(Vector().up(), grid);
		}
		if (input.getKeyDown('s'))
		{
			p1.move(Vector().down(), grid);
		}

		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame();
	}
	return 0;
}
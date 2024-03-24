#include <iostream>
#include <conio.h>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"
#include "Ball.h"
#include "Paddle.h"
#include "Menu.h"

Grid grid(20, 15);
InputHandler input;

int clamp(int num, int min, int max)
{
	if (num > max)
	{
		return max;
	}
	else if (num < min)
	{
		return min;
	}
	else
	{
		return num;
	}

}

int main()
{
	bool running;

	Menu::display();

	Ball ball(Vector(5, 7), grid);
	Paddle p1(Vector(2, grid.getDimensions().y / 2), 2, grid);
	Paddle p2(Vector(grid.getDimensions().x - 3, grid.getDimensions().y / 2), 3, grid);

	ball.setTrajectory(Vector().right().add(Vector().down()));

	while (running)
	{
		ball.move(grid);

		if (_kbhit())
		{
			char key;
			key = _getch();
			if (key == 'w') //player paddle movement
			{
				p1.move(Vector().up(), grid);
			}
			if (key == 's')
			{
				p1.move(Vector().down(), grid);
			}

			//quit game
			if (key == 'x')
			{
				return 0;
			}
		}

		//p2.move(Vector(0, clamp(ball.getTrajectory().y, grid.getDimensions().y - 2,  2)), grid);
		p2.move(Vector(0, ball.getTrajectory().y), grid);

		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame();
	}
	return 0;
}
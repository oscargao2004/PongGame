#include <iostream>
#include <conio.h>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"
#include "Ball.h"
#include "Paddle.h"
#include "Menu.h"
#include "Player.h"
#include "Scoreboard.h"

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

void resetGame()
{
		
}

int main()
{
	bool running;

	int roundNum = 0;
	int rounds = 10;

	Ball ball(Vector(5, 7), grid);

	Paddle pad1(Vector(2, grid.getDimensions().y / 2), 3, grid);
	Paddle pad2(Vector(grid.getDimensions().x - 3, grid.getDimensions().y / 2), 3, grid);

	std::string p1name;
	Player p1(p1name);
	Player p2("CPU");
	ball.setTrajectory(Vector().right().add(Vector().down()));

	if (Menu::start())
	{
		std::cout << "Please input a name: ";
		std::cin >> p1name;

		p1.setName(p1name);

		TextRenderer::clearFrame();
		running = true;
	}
	else
	{
		running = false;
	}

	while (running)
	{
		ball.move(grid);

		if (_kbhit())
		{
			char key;
			key = _getch();
			if (key == 'w') //player paddle movement
			{
				pad1.move(Vector().up(), grid);
			}
			if (key == 's')
			{
				pad1.move(Vector().down(), grid);
			}

			//quit game
			if (key == 'x')
			{
				exit(0);
			}
		}

		//p2.move(Vector(0, clamp(ball.getTrajectory().y, grid.getDimensions().y - 2,  2)), grid);
		pad2.move(Vector(0, ball.getTrajectory().y), grid);


		if (ball.getPosition().x == 1)
		{
			if (roundNum > rounds)
			{
				exit(0);
			}
			else
			{
				p2.addScore(1);
				resetGame();
				roundNum++;

			}
		}
		else if (ball.getPosition().x == grid.getDimensions().x - 2)
		{
			if (roundNum > rounds)
			{
				exit(0);
			}
			else
			{
				p1.addScore(1);
				resetGame();
				roundNum++;

			}
		}

		std::cout << "Round: " << roundNum << " / " << rounds << std::endl;
		Scoreboard::display(p1, p2);
		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame();
	}
	return 0;
}
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
#include <windows.h>

Grid grid(20, 15);
InputHandler input;

Ball ball(Vector(5, 7), grid);

Paddle pad1(Vector(2, grid.getDimensions().y / 2), 3, grid);
Paddle pad2(Vector(grid.getDimensions().x - 3, grid.getDimensions().y / 2), 3, grid);

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
	TextRenderer::clearFrame();
	ball.setPosition(Vector(5, 7));
	ball.setTrajectory(Vector().right().add(Vector().up()));
}

int main()
{
	bool running;

	int roundNum = 0;

	std::string p1name;
	Player p1(p1name);
	Player p2("CPU");
	ball.setTrajectory(Vector().right().add(Vector().down()));

	if (Menu::display())
	{
		TextRenderer::clearFrame();

		std::cout << "Please input a name: ";
		std::cin >> p1name;

		p1.setName(p1name);

		TextRenderer::clearFrame();

		std::cout << "3\n"; 
		Sleep(1000);
		std::cout << "2\n";
		Sleep(1000);
		std::cout << "1\n";
		Sleep(1000);

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

		//pad2.move(Vector(0, ball.getTrajectory().y), grid);

		if (pad2.getPosition().y < ball.getPosition().y)
		{
			pad2.move(Vector().down(), grid);
		}
		else if (pad2.getPosition().y > ball.getPosition().y)
		{
			pad2.move(Vector().up(), grid);
		}


		//when ball reaches either side
		if (ball.getPosition().x == 1) //if ball reaches left side
		{
			std::cout << "You scored: " << p1.getScore() << std::endl;
			/*if (Scoreboard::_players.size() == 0)
			{
				Scoreboard::addPlayer(p1);
			}
			else
			{
				for (Player& player : Scoreboard::_players)
				{
					if (p1.getScore() > player.getScore())
					{
						player.setName(p1.getName());
						player.setScore(p1.getScore());
					}
				}
			}*/
			return 0;
		}
		else if (ball.getPosition().x == grid.getDimensions().x - 2) //if ball reaches right side
		{
			TextRenderer::clearTile(ball.getPosition(), grid);
			p1.addScore(1);
			resetGame();
			roundNum++;
		}

		std::cout << "Round: " << roundNum << std::endl;
		Scoreboard::display(p1, p2);
		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame();
	}
	return 0;
}


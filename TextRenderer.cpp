#include "TextRenderer.h"
#include <iostream>
#include <windows.h>

void TextRenderer::drawTile(Vector pos, Grid &grid, bool collision)
{
	Tile& tile = grid.getTileAt(pos);
	tile.setChar(TextRenderer::boxChar);
	tile.setCollision(collision);
}

void TextRenderer::clearTile(Vector pos, Grid &grid)
{
	Tile& tile = grid.getTileAt(pos);
	tile.setChar(TextRenderer::empty);
	tile.setCollision(false);

}
void TextRenderer::drawFrame(Grid &grid)
{
	for (int y = 0; y < grid.getDimensions().y; y++)
	{
		for (int x = 0; x < grid.getDimensions().x; x++)
		{
			if (x == grid.getDimensions().x - 1)
			{
				std::cout << grid.getTileAt(Vector(x, y)).getChar();
				std::cout << grid.getTileAt(Vector(x, y)).getChar();
				std::cout << std::endl;
			}
			else
			{
				std::cout << grid.getTileAt(Vector(x, y)).getChar();
				std::cout << grid.getTileAt(Vector(x, y)).getChar();
			}
		}
	}
}
void TextRenderer::updateFrame()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD defaultCursorPos = { 0,0 };

	SetConsoleCursorPosition(console, defaultCursorPos);

	Sleep(1000/30); //adjust framerate
}

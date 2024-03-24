#include "TextRenderer.h"
#include <iostream>

void TextRenderer::draw(char c, Vector start, Vector end, Grid grid)
{
	Vector vec = end.subtract(start);

	for (int i = 0; i < vec.magnitude(); i++)
	{

	}

}
void TextRenderer::draw(char c, Vector position, Grid grid)
{
	grid.getTileAt(position).setChar(c);

}

void TextRenderer::drawFrame(Grid grid)
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
void TextRenderer::clearFrame()
{
	std::cout << std::flush;
}

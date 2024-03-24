#include <iostream>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"

Grid grid(20, 15);
char boxChar = (char)254u;

int main()
{
	TextRenderer::draw(boxChar, Vector(0, 0), Vector(grid.getDimensions().x, grid.getDimensions().y), grid);
	TextRenderer::drawFrame(grid);
	return 0;
}
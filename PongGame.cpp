#include <iostream>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"
#include "Ball.h"

Grid grid(20, 15);
InputHandler input;

int main()
{
	Ball ball(grid);
	TextRenderer::draw(TextRenderer::boxChar, Vector(1, 1), grid);

	while (true)
	{
		TextRenderer::drawFrame(grid);
		TextRenderer::updateFrame(grid);

	}
	return 0;
}
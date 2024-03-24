#include <iostream>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"

Grid grid(20, 15);
char boxChar = (char)254u;
InputHandler input;

int main()
{
	//TextRenderer::draw(boxChar, Vector(0, 0), Vector(grid.getDimensions().x, grid.getDimensions().y), grid);
	//TextRenderer::drawFrame(grid);

	while (true)
	{
		if (input.getKeyDown('b'))
		{
			std::cout << "balls" << std::endl;
		}
	}
	return 0;
}
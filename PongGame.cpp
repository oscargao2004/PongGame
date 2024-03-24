#include <iostream>
#include "Grid.h"
#include "TextRenderer.h"
#include "Vector.h"
#include "InputHandler.h"

Grid grid(20, 15);
InputHandler input;

int main()
{
	TextRenderer::drawFrame(grid);

	while (true)
	{
		if (input.getKeyDown('b'))
		{
			std::cout << "balls" << std::endl;
		}
	}
	return 0;
}
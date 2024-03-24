#pragma once
#include "Grid.h"
#include "Vector.h"
static class TextRenderer
{
public:
	static char const boxChar = (char)219;//(char)254u;
	static char const empty = ' ';

	static void draw(char c, Vector start, Vector end, Grid grid);
	static void draw(char c, Vector position, Grid grid);
	static void drawFrame(Grid grid);
	static void clearFrame();
};


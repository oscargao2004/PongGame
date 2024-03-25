#pragma once
#include "Grid.h"
#include "Vector.h"
class TextRenderer
{
public:
	static char const boxChar = (char)219;//(char)254u;
	static char const empty = ' ';

	//static void draw(char c, Vector start, Vector end, Grid grid);
	static void drawTile(Vector pos, Grid &grid, bool collision);
	static void clearTile(Vector pos, Grid &grid);
	static void drawFrame(Grid &grid);
	static void updateFrame();
	static void clearFrame();
};


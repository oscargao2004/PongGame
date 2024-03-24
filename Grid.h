#pragma once
#include "Tile.h"
#include "Vector.h"
#include <vector>
class Grid
{
private:
	int _height;
	int _width;
	std::vector<Tile> _tiles;
public:
	Grid(int x, int y);
	Tile getTileAt(Vector position);
	Vector getDimensions();
};

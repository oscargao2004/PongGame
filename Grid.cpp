#include "Grid.h"
Grid::Grid(int x, int y) : _width(x), _height(y)
{
	for (int w = 0; w < x; w++)
	{
		for (int h = 0; h < y; h++)
		{
			Tile newTile(Vector(w, h), (char)254u, false);
			_tiles.push_back(newTile);
		}
	}
}

Tile Grid::getTileAt(Vector position)
{
	for (Tile tile : _tiles)
	{
		Vector currentTilePos = tile.getPosition();
		if (tile.getPosition().isEqual(position))
		{
			return tile;
		}
	}

}

Vector Grid::getDimensions()
{
	return Vector(_width, _height);
}



#include "Grid.h"
#include "TextRenderer.h"
Grid::Grid(int x, int y) : _width(x+2), _height(y+2)
{
	for (int h = 0; h < _height; h++)
	{
		for (int w = 0; w < _width; w++)
		{
			if (w > 0 && w < _width - 1 && h > 0 && h < _height - 1)
			{
				Tile newTile(Vector(w, h), TextRenderer::empty, false);
				_tiles.push_back(newTile);
			}
			else
			{
				Tile newTile(Vector(w, h), TextRenderer::boxChar, true);
				_tiles.push_back(newTile);
			}
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



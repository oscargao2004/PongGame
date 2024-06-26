#include "Grid.h"
#include "TextRenderer.h"
#include "Tile.h"
Grid::Grid(int x, int y) : _width(x+2), _height(y+2)
{
	for (int h = 0; h < _height; h++)
	{
		for (int w = 0; w < _width; w++)
		{
			if (w > 0 && w < _width - 1 && h > 0 && h < _height - 1) //create empty spaces
			{
				Tile newTile(Vector(w, h), TextRenderer::empty, false);
				_tiles.push_back(newTile);
			}
			else //create border 
			{
				Tile newTile(Vector(w, h), TextRenderer::boxChar, true);
				_tiles.push_back(newTile);

				if (h == 0) //set normals for top/bottom border collisions
				{
					newTile.setNormal(Vector().down());
				}
				if (h == _height - 1)
				{
					newTile.setNormal(Vector().up());
				}

				if (w == 0) //set gameover state for left/right wall collisons
				{
					newTile.setGameOver();

				}
				if (w == _width - 1)
				{
					newTile.setGameOver();

				}
			}

			
		}
	}
}

Tile &Grid::getTileAt(Vector position)
{
	for (Tile& tile : _tiles)
	{
		if (tile.getPosition().isEqual(position))
		{
			return tile;
		}
	}

	/*for (int i = 0; i < _tiles.size(); i++)
	{
		if (_tiles[i].getPosition().isEqual(position))
		{
			return _tiles[i];
		}
	}*/

}

Vector Grid::getDimensions()
{
	return Vector(_width, _height);
}



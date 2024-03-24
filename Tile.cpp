#include "Tile.h"

Vector Tile::getPosition()
{
    return _position;
}

void Tile::setEmpty(bool b)
{
    _isEmpty = b;
}

void Tile::setChar(char c)
{
    _character = c;
}

char Tile::getChar()
{
    return _character;
}

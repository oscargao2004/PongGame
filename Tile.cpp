#include "Tile.h"

Vector Tile::getPosition()
{
    return _position;
}

void Tile::setChar(char c)
{
    _character = c;
}

char Tile::getChar()
{
    return _character;
}

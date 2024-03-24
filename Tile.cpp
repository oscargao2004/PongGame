#include "Tile.h"

Vector Tile::getPosition()
{
    return _position;
}

void Tile::setEmpty(bool b)
{
    _isEmpty = b;
}

bool Tile::isEmpty()
{
    return _isEmpty;
}

void Tile::setChar(char c)
{
    _character = c;
}

char Tile::getChar()
{
    return _character;
}

void Tile::setNormal(Vector vec)
{
    _normal = vec;
}

Vector Tile::getNormal()
{
    return _normal;
}

#include "Tile.h"

Vector Tile::getPosition()
{
    return _position;
}

void Tile::setCollision(bool b)
{
    _collision = b;
}

bool Tile::isCollidable()
{
    return _collision;
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

void Tile::setGameOver()
{
    _gameOver = true;
}

bool Tile::isGameOver()
{
    return _gameOver;
}

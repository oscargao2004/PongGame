#pragma once
#include "Vector.h"
class Tile
{
private:
	Vector _position;
	char _character;
	bool _isEmpty;
public:
	Vector getPosition();
	void setChar(char c);
	char getChar();
	Tile(Vector pos, char character, bool isEmpty) : _position(pos), _character(character), _isEmpty(isEmpty) {}
};



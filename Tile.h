#pragma once
#include "Vector.h"
class Tile
{
private:
	Vector _position;
	char _character;
	bool _isEmpty;
	Vector _normal;

	/*enum Type
	{
		Paddle,
		Empty,
		Border,
		Ball,
		GameOver
	};

	Type _tileType;*/
public:
	Vector getPosition();

	void setEmpty(bool b);
	bool isEmpty();

	void setChar(char c);
	char getChar();

	void setNormal(Vector vec);
	Vector getNormal();
	//Tile(Vector pos, char character, Type type) : _position(pos), _character(character), _tileType(type) {}
	Tile(Vector pos, char character, bool b) : _position(pos), _character(character), _isEmpty(b) {}
};
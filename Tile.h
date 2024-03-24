#pragma once
#include "Vector.h"
class Tile
{
private:
	Vector _position;
	char _character;
	bool _collision;
	Vector _normal;
	bool _gameOver;

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

	void setCollision(bool b);
	bool isCollidable();

	void setChar(char c);
	char getChar();

	void setNormal(Vector vec);
	Vector getNormal();

	void setGameOver();
	bool isGameOver();
	//Tile(Vector pos, char character, Type type) : _position(pos), _character(character), _tileType(type) {}
	Tile(Vector pos, char character, bool b) : _position(pos), _character(character), _collision(b), _gameOver(false) {}
};
#pragma once
class Vector
{
private:
	int _gridLength;
public:
	int x;
	int y;

	Vector(int x, int y) : x(x), y(y), _gridLength(x){}
	Vector add(Vector vec);
	Vector subtract(Vector vec);
	bool isEqual(Vector vec);
	int magnitude();

	Vector up();
	Vector down();
	Vector right();
	Vector left();
};



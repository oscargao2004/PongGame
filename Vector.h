#pragma once
class Vector
{
private:
	int _gridLength;
public:
	int x;
	int y;

	Vector() : x(0), y(0), _gridLength(0) {}
	Vector(int x, int y) : x(x), y(y), _gridLength(x){}
	Vector add(Vector vec);
	Vector subtract(Vector vec);
	bool isEqual(Vector vec);
	int magnitude();

	Vector down();
	Vector up();
	Vector right();
	Vector left();
};



#pragma once
#include <conio.h>
#include "Vector.h"
static class InputHandler
{
private:
	Vector _inputDirection;
	static char _key;
public:
	bool getKeyDown(char key);
};


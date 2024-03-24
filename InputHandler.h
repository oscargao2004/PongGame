#pragma once
#include <conio.h>
#include "Vector.h"
class InputHandler
{
private:
	static char _key;
public:
	bool getKeyDown(char key);
};


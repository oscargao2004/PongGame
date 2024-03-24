#include "InputHandler.h"
#include <iostream>

char InputHandler::_key = 0;

bool InputHandler::getKeyDown(char key)
{
	if (_kbhit())
	{
		_key = _getch();
		if (_key == key)
		{
			std::cout << "keyboard hit";
			return true;
		}
		else
		{
			return false;
		}

	}
	return false;
}



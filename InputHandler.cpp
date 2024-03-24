#include "InputHandler.h"

char InputHandler::_key = 0;

bool InputHandler::getKeyDown(char key)
{
	if (_kbhit())
	{
		_key = _getch();
		if (_key == key)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	return NULL;
}



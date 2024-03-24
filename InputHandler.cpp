#include "InputHandler.h"

bool InputHandler::getKeyDown(char key)
{
	while (true)
	{
		if (_kbhit)
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
	}
}

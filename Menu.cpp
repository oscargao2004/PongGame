#include "Menu.h"
#include "TextRenderer.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
bool Menu::start()
{
	char choice;

	cout << "Start Y/N\n";
	cin >> choice;

	if (choice == 'Y')
	{
		TextRenderer::updateFrame();
		return true;
	}
	else if (choice == 'N')
	{
		return false;
	}
	else
	{
		cout << "INVALID OPTION\n";
		return NULL;
	}
}



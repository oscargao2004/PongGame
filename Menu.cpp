#include "Menu.h"
#include "TextRenderer.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
bool Menu::display()
{
	char choice;

	cout << "Start Y/N\n";
	cout << "Input S to View Scoreboard\n";
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
	else if (choice == 'S')
	{

	}
	else
	{
		cout << "INVALID OPTION\n";
		return NULL;
	}
}



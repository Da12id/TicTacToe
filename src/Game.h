#pragma once
#include "Grille.h"
#include "Cell.h"
#include <iostream>
class Game
{
public:
	Game();
	void RunGame();

private:
	bool IsRunning;
	char table[3][3] = {
		{' ', ' ' , ' '},
		{' ', ' ' , ' '},
		{' ', ' ' , ' '},
	};
};


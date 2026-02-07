#pragma once
#include <iostream>
class Cell
{
public:
	Cell();
	char CheckVictory(char grille[3][3]);
	char CheckDraw(char grille[3][3]);
	bool CheckCell(char grille[3][3], int ligne, int colonne);
private:
	bool LineisFull;
	bool ColumnisFull;
};


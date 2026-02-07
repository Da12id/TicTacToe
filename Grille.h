#pragma once
#include "Cell.h"
class Grille
{
public:
	Cell cell;
	Grille();
	void affichergrille(char grille[3][3]);
	void choixJoueurX(char grille[3][3]);
	void choixJoueurO(char grille[3][3]);

private:
	char joueurO = 'O';
	char joueurX = 'X';
	int ligne;
	int colonne;
};



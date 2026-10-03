#include "Cell.h"

Cell::Cell()
{

}

char Cell::CheckVictory(char grille[3][3])
{
	//verifier toutes les lignes
	for (int ligne = 0; ligne < 3; ligne++)
	{
		if (grille[ligne][0] != ' ')
			if (grille[ligne][0] == grille[ligne][1])
				if (grille[ligne][0] == grille[ligne][2])
				{
					char gagnant = grille[ligne][0];
					std::cout << "Le joueur " << gagnant << " a gagne\n"<< grille[ligne][ligne];
					return true;
				}
	}

	//verifier toutes les colonnes
	for (int colonne = 0; colonne < 3; colonne++)
	{
		if (grille[0][colonne] != ' ')
			if (grille[0][colonne] == grille[1][colonne])
				if (grille[0][colonne] == grille[2][colonne])
				{
					char gagnant = grille[0][colonne];
					std::cout << "Le joueur " << gagnant << " a gagne\n" << grille[colonne][colonne];
					return true;
				}
	}
	//verifier les deux diagonales
	if (grille[0][0] != ' ')
		if (grille[0][0] == grille[1][1])
			if (grille[0][0] == grille[2][2])
			{
				char gagnant = grille[0][0];
				std::cout << "Le joueur " << gagnant << " a gagne";
				return true;
			}

	if (grille[0][2] != ' ')
		if (grille[0][2] == grille[1][1])
			if (grille[0][2] == grille[2][0])
			{
				char gagnant = grille[0][2];
				std::cout << "Le joueur " << gagnant << " a gagne";
				return true;
			}
	return false;
}

char Cell::CheckDraw(char grille[3][3])
{
	for (int ligne = 0; ligne < 3; ligne++)
	{
		for (int colonne = 0; colonne < 3; colonne++)
		{
			if (grille[ligne][colonne] == ' ')
				return false;
		}
	}
	std::cout << "Egalite comme toujours";
	return true;
}


bool Cell::CheckCell(char grille[3][3], int ligne, int colonne)
{
	if (grille[ligne][colonne] == ' ')
		return true;
	else
		return false;
	return false;
}

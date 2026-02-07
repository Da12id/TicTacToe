#include "Grille.h"
#include <iostream>
Grille::Grille()
{

}

void Grille::affichergrille(char grille[3][3])
{
	std::cout << "  0   1   2\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << " ";
		for (int j = 0; j < 3; j++)
		{
			std::cout << grille[i][j];
			if (j < 2)
				std::cout << " " << "|" << " ";
		}
		if (i < 2)
			std::cout << std::endl << " ---+---+---\n";
	}
	std::cout << std::endl;
}

void Grille::choixJoueurX(char grille[3][3])
{
	affichergrille(grille);
	std::cout << "tour du joueur  " << joueurX << std::endl;
	std::cout << "choisisser la ligne ou vous souhaitait jouer: ";
	std::cin >> ligne;
	while (ligne > 2 || ligne < 0)
	{
		std::cout << "ligne non valide, veuillez selectionner un chiffre entre 0 et 2: ";
		std::cin >> ligne;
	}

	std::cout << "maintenant choisisser la colonne ou vous souhaitait jouer: ";
	std::cin >> colonne;
	while (colonne > 2 || colonne < 0)
	{
		std::cout << " colonne non valide veuillez selectionner un chiffre entre 0 et 2: ";
		std::cin >> colonne;
	}
	if (cell.CheckCell(grille, ligne, colonne) == false)
	{
		system("cls");
		std::cout << "Case deja occupé veuillez en selectionner une autre\n";
		choixJoueurX(grille);
	}
	grille[ligne][colonne] = joueurX;
	system("cls");
}

void Grille::choixJoueurO(char grille[3][3])
{
	affichergrille(grille);
	std::cout << "tour du joueur  " << joueurO << std::endl;
	std::cout << "choisisser la ligne ou vous souhaitait jouer: ";
	std::cin >> ligne;
	while (ligne > 2 || ligne < 0)
	{
		std::cout << "ligne non valide, veuillez selectionner un chiffre entre 0 et 2: ";
		std::cin >> ligne;
	}

	std::cout << "maintenant choisisser la colonne ou vous souhaitait jouer: ";
	std::cin >> colonne;
	while (colonne > 2 || colonne < 0)
	{
		std::cout << " colonne non valide veuillez selectionner un chiffre entre 0 et 2: ";
		std::cin >> colonne;
	}
	if (cell.CheckCell(grille, ligne, colonne) == false)
	{
		system("cls");
		std::cout << "Case deja occupe veuillez en selectionner une autre\n";
		choixJoueurO(grille);
	}
	grille[ligne][colonne] = joueurO;
	system("cls");
}
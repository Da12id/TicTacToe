#include "Game.h"
Game::Game() 
{

}
void Game::RunGame()
{
	Grille grille;
	Cell cell;
	IsRunning = false;
	while (IsRunning == false)
	{
		grille.choixJoueurX(table);
		if (cell.CheckVictory(table) == true)
			break;
		if (cell.CheckDraw(table) == true)
			break;
		grille.choixJoueurO(table);
		if (cell.CheckVictory(table) == true)
			break;
		if (cell.CheckDraw(table) == true)
			break;
	}
}

#include "GameControl.h"

//FPS
int FPS = 60;

//controlador do fluxo escopo
void GameControl::Controlador()
{
	//inicia Janela, FPS & Variaveis de resolução
	InitWindow(0,0, "MazeRush");

	int Lines = GetMonitorWidth(0);
	int Colunas = GetMonitorHeight(0);

	SetWindowSize(Lines /2, Colunas/2);
	SetWindowPosition(40, 50);

	 Larg = (Lines / 2) /10;
	 Alt = (Colunas / 2) /10;

	SetTargetFPS(FPS);
	//Declaração & iniciação do Tabuleiro
	Tabuleiro Tab(Larg, Alt);

	//fluxo do game
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(GRAY);
		Tab.GrafoLab(Larg, Alt);
		EndDrawing();
	}
	CloseWindow();
}

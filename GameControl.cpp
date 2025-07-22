#include "GameControl.h"

//FPS
int FPS = 60;

//controlador do fluxo escopo
void GameControl::Controlador()
{
	//inicia Janela e FPS
	InitWindow(Larg *10,Alt*10, "MazeRush");
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

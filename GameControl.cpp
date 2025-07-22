#include "GameControl.h"

//FPS
int FPS = 15;

//controlador do fluxo escopo
void GameControl::Controlador()
{
	//inicia Janela e FPS
	InitWindow(Larg *10,Alt*10, "MazeRush");
	SetTargetFPS(FPS);

	//Declaração & iniciação do Tabuleiro e do personagem
	Tabuleiro Tab(Larg, Alt);
	character CubeB;
	const auto& lab = Tab.obterCelulas();
	//fluxo do game
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(GRAY);
		Tab.GrafoLab(Larg, Alt);
		CubeB.PersonagemDef();
		CubeB.PersonagemMov(lab);
		EndDrawing();
	}
	CloseWindow();
}
